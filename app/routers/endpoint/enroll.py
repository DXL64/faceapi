import logging
import time
from datetime import datetime
import traceback
from typing import List
import uuid

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse
import cv2
import numpy as np
import base64
import requests

from common.ai_pipelines.FaceExtractor import FaceExtractor, MultipleFaceException
from common.milvus.milvus import MilvusClient, MilvusFaceIDObject
from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import EnrollResponse, ResponseCode, ResponseMessage, MultipleUrlExceptions, UrlException
from ..api_request_schemas import EnrollRequest, MultipleBadField
from common.minio import MinioClient
from utils.logging import TimingLog
from statistics import mode

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()


# @router.post("")
async def enroll(item: EnrollRequest):
    response = EnrollResponse()
    logger.info(f"Request {response.request_id}: {item}")
    response.code = None
    ## required by QC
    try:
        item.precheck()
    except Exception as e:
        if isinstance(e, MultipleBadField):
            response.code = ResponseCode.BAD_REQUEST
            response.data = [
                {
                    "description": e.messages
                }
            ]
        response.message = ResponseMessage(response.code)
        return JSONResponse(jsonable_encoder(response))

    imagesUrls = item.imageUrls
    userId = item.userId
    credential = item.credential
    name = item.name
    description = item.description
    department = item.department
    member_type = item.type
    expired = item.expired if item.expired else datetime.now()
    isForceUpdate = item.isForceUpdate
    
    start = time.time()
    milvus_client = MilvusClient()
    logger.info(f"milvus init time: {time.time() - start} {member_type}")

    face_extractor = FaceExtractor()
    db = get_db_connection()
    face_ids = []
    try:
        minio_client = MinioClient()
        minio_is_work = True
        logger.info(f"Minio is working!")
    except: 
        minio_is_work = False
        logger.error(f"Minio is not working!")
    
    # list_img_bytes = [minio_client.load_obj(img_url) for img_url in imagesUrls]  
    list_img_bytes = []
    url_exceptions = []
    old_milvus_data = []
    needToSearchMilvus = True
    updateByCode = False
    create = False
    embs_duplicate_code = []

    try:
        time_str = datetime.now().strftime("%Y%m%d")
        for img_url in imagesUrls:
            res = requests.get(img_url)
            if res.status_code == 200:
                list_img_bytes.append(res.content)
            else:
                url_exceptions.append(UrlException(f"{img_url} invalid!", img_url))

        if len(url_exceptions) > 0:
            raise MultipleUrlExceptions(url_exceptions)

        start = time.time()
        face_vectors, face_aligneds = face_extractor.extract_feature_batch(list_img_bytes, imagesUrls)
        logger.info(f"Extractor: {time.time() - start}")

        ## check all images are the same person
        
        if not np.all(face_vectors.dot(face_vectors.T) > settings.FACE_ENROLL_THRESHOLD):
            response.code = ResponseCode.REG_IMAGE_IS_NOT_THE_SAME
            response.data = [
                {
                    "description": "All of enroll images are not of the same person!"
                }
            ]
            raise Exception(f"All of enroll images are not of the same person! {face_vectors.dot(face_vectors.T)}")

        if userId is not None:
            dossiers = crud.get_all_dossier_by_userId(db, userId)
        elif credential is not None:
            dossiers = crud.get_all_dossier_by_credential(db, credential)
            
        if len(dossiers) > 0:
            latest_dossier = dossiers[-1]
            latest_embs = latest_dossier.to_dict()["vectors"]
            latest_embs = np.array([np.frombuffer(base64.b64decode(emb), dtype=np.float32) for emb in latest_embs])
            print(latest_embs.shape)
            score_matching = face_vectors.dot(latest_embs.T)
            if np.all(score_matching > settings.FACE_ENROLL_THRESHOLD_MILVUS):
                updateByCode = True
                needToSearchMilvus = False

        if needToSearchMilvus:
            existed_faces = milvus_client.search_topK_face(face_vectors, topK=1)
            best_face = existed_faces[0]
            if best_face == -1:
                create = False
                response.data = [
                    {
                        "description": "Searching in Milvus failed, please restart service and retry again!!"
                    }
                ]
                raise Exception("Searching in Milvus failed, please restart service and retry again!!")

            elif best_face is not None:
                ## take the best face having a similarity score
                for _face in existed_faces:
                    if _face[0].distance > best_face[0].distance:
                        best_face = _face
                existed_face = best_face[0]
                logger.info(f"Found best matching face [id={existed_face.id}]: {existed_face.distance}")
            else:
                existed_face = None

            if existed_face is not None and existed_face.distance >= settings.FACE_ENROLL_THRESHOLD_MILVUS:
                existed_faceid = crud.get_face_by_id(db, existed_face.id)
                localUserId = existed_faceid.localUserId
                existed_dossier = crud.get_dossier_by_id(db, localUserId)

                if len(dossiers) > 0:
                    latest_dossier = dossiers[-1]
                    if userId is not None:
                        if latest_dossier.userId == existed_dossier["userId"]:
                            ## update to latest dossier
                            updateByCode = True
                            logger.info("Duplicate face, Duplicate userId")
                        else:
                            if isForceUpdate:
                                ## update to latest_dossier
                                updateByCode = True
                                logger.info("Duplicate face, not duplicate userId")
                            else:
                                response.code = ResponseCode.FACE_ALREADY_EXISTED
                                response.data = [existed_dossier]

                    elif credential is not None:
                        if latest_dossier.credential == existed_dossier["credential"]:
                            updateByCode = True
                            logger.info("Duplicate face, Duplicate credential")
                        else:
                            if isForceUpdate:
                                ## update to latest_dossier
                                updateByCode = True
                                logger.info("Duplicate face, not duplicate userId")
                            else:
                                response.code = ResponseCode.FACE_ALREADY_EXISTED
                                response.data = [existed_dossier]

                else:
                    if isForceUpdate:
                        ## insert new localUserId
                        create = True
                    else:
                        response.code = ResponseCode.FACE_ALREADY_EXISTED
                        response.data = [existed_dossier]

            else:
                if len(dossiers) > 0:
                    ## update by userId to latest_dossier
                    updateByCode = True
                    logger.info("not duplicate face, duplicate userId")
                else:
                    ## insert new localUserId
                    create = True

        if updateByCode:
            latest_dossier = dossiers[-1]
            localUserId = latest_dossier.localUserId
            if userId is not None:
                logger.info(f"Found localUserId {localUserId} matching userId: {userId}")
            elif credential is not None:
                logger.info(f"Found localUserId {localUserId} matching credential: {credential}")

            new_dict = item.dict()
            crud.update_dossier(db, localUserId, **new_dict)

            faces = crud.get_face_by_localUserId(db, localUserId)
            for face in faces:
                effective_rows = crud.delete_face_by_id(db, face.id)
                assert effective_rows > 0
                assert milvus_client.delete_faces([face.id])
                old_milvus_data.append(face)
                logger.info(f"Remove face_id: {face.id}")
            
            updated_dossier = crud.get_dossier_by_id(db, localUserId)
            updated_dossier["imageUrls"] = []
            updated_dossier["vectors"] = []

            for face_vector, face_aligned, original_url in zip(face_vectors, face_aligneds, imagesUrls):
                uuid_str = uuid.uuid4()
                norm_path = f"enroll/{time_str}/{uuid_str}_norm.jpg"

                embedding_encoded = base64.b64encode(face_vector)
                created_face = crud.create_face(db, localUserId=localUserId,
                                                original_photo=original_url,
                                                normalized_photo=norm_path, face_embedding=embedding_encoded)
                updated_dossier["imageUrls"].append(original_url)
                updated_dossier["vectors"].append(embedding_encoded)
                milvusFace = MilvusFaceIDObject(face_id=created_face.id, localUserId=localUserId, embeddings=face_vector)
                assert milvus_client.insert_face(milvusFace), "Insert Milvus failed!"
                face_ids.append(created_face.id)
                logger.info(f"Insert face_id: {created_face.id}")

                if minio_is_work: 
                    # send photo to minio
                    img_encode = cv2.imencode(".jpg", face_aligned)[1].tostring()
                    minio_client.send_obj(img_encode, norm_path)

            ## delete other dossier matching userId
            for dos in dossiers[:-1]:
                old_localUserId = dos.localUserId
                data = crud.get_face_by_localUserId(db, old_localUserId)
                old_ids = [face.id for face in data]

                assert len(old_ids) > 0, f"localUserId {old_localUserId}"
                assert milvus_client.delete_faces(old_ids), "Occur error when deleting face vector in milvus!"
                effected_rows = crud.delete_dossier_by_id(db, old_localUserId)
                assert effected_rows > 0
                embs_duplicate_code.append(data)

                if userId is not None:
                    logger.info(f"Delete localUserId {old_localUserId} due to duplicate userId {userId}")
                elif credential is not None:
                    logger.info(f"Delete localUserId {old_localUserId} due to duplicate credential {credential}")

            response.code = ResponseCode.FACE_CREATED_SUCCESS
            response.data = [updated_dossier]
            # logger.info(response.data)
            logger.info(crud.get_dossier_by_id(db, localUserId))

        if create:
            created_dossier = crud.create_dossier(db, userId=userId, credential=credential, name=name, 
                                                  description=description, department=department,
                                                  type=member_type, expired=expired, isForceUpdate=isForceUpdate)

            for face_vector, face_aligned, original_url in zip(face_vectors, face_aligneds, imagesUrls):
                uuid_str = uuid.uuid4()
                norm_path = f"enroll/{time_str}/{uuid_str}_norm.jpg"

                embedding_encoded = base64.b64encode(face_vector)
                created_face = crud.create_face(db, localUserId=created_dossier.localUserId,
                                                original_photo=original_url,
                                                normalized_photo=norm_path, face_embedding=embedding_encoded)
                print(face_vector.shape, face_vector.dtype)
                milvusFace = MilvusFaceIDObject(face_id=created_face.id, localUserId=created_dossier.localUserId, embeddings=face_vector)
                assert milvus_client.insert_face(milvusFace), "Insert Milvus failed!"
                face_ids.append(created_face.id)
                logger.info(f"localUserId {created_dossier.localUserId} insert face_id: {created_face.id}")

                if minio_is_work:
                    # send photo to minio
                    img_encode = cv2.imencode(".jpg", face_aligned)[1].tostring()
                    minio_client.send_obj(img_encode, norm_path)

            response.code = ResponseCode.FACE_CREATED_SUCCESS
            response.data = [created_dossier.to_dict()]

    except Exception as e:
        # Database Rollback
        logger.info("Rollback database and Milvus!")
        db.rollback()
        # Milvus Rollback
        for face in old_milvus_data:
            old_embedding = np.frombuffer(base64.b64decode(face.face_embedding), dtype=np.float32)
            milvusFace = MilvusFaceIDObject(face_id=face.id, localUserId=face.localUserId, embeddings=old_embedding)
            milvus_client.insert_face(milvusFace)
            logger.info(f"Reverse face_id: {face.id}")

        for id_ in face_ids:
            milvus_client.delete_faces([id_])
            logger.info(f"Remove face_id: {id_}")
        
        # Rollback for duplicate userId
        for data in embs_duplicate_code:
            for face in data:
                old_embedding = np.frombuffer(base64.b64decode(face.face_embedding), dtype=np.float32)
                milvusFace = MilvusFaceIDObject(face_id=face.id, localUserId=face.localUserId, embeddings=old_embedding)
                milvus_client.insert_face(milvusFace)
                logger.info(f"Reverse localUserId {face.localUserId} - face_id: {face.id}")

        traceback.print_exc()
        if isinstance(e, MultipleFaceException):

            print("CODE RESPONSE: ", e.code_responses) 
            if len(e.code_responses) > 0:
                response.code = mode(e.code_responses) 
            else:

                response.code = ResponseCode.BAD_REQUEST
            response.data = [
                {
                    "urls": e.paths,
                    "description": e.messages
                }
            ]
        elif isinstance(e, MultipleUrlExceptions):
            response.code = ResponseCode.BAD_REQUEST
            response.data = [
                {
                    "urls": e.paths,
                    "description": e.messages
                }
            ]
        else:
            if response.code is None:
                response.code = ResponseCode.INTERNAL_SERVER_ERROR

    finally:
        db.commit()
        logger.info("Closed database connection!")
        db.close()
        response.message = ResponseMessage(response.code)
        return JSONResponse(jsonable_encoder(response))