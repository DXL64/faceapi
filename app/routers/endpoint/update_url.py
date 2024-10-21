import logging
import time
from datetime import datetime
import traceback
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
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage, MultipleUrlExceptions, UrlException, TheSamePersonException,UserNotExist
from ..api_request_schemas import MultipleBadField, BadField, UpdateRequestImageUrls
from common.minio import MinioClient
from utils.logging import TimingLog

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()


async def update_url(userId: str, item: UpdateRequestImageUrls):
    # check some condition
    db = get_db_connection()
    response = BaseResponse()
    start = time.time()
    milvus_client = MilvusClient()
    logger.info(f"Milvus init time: {time.time() - start}")

    face_extractor = FaceExtractor()
    face_ids = []
    try:
        minio_client = MinioClient()
        minio_is_work = True
        logger.info(f"Minio is working!")
    except: 
        minio_is_work = False
        logger.info("Minio is not working!")

    logger.info(f"Request {response.request_id}: {item}")

    list_exceptions = []
    list_img_bytes = []
    url_exceptions = []
    the_same_person_exceptions = []
    old_milvus_data = []
    needToSearchMilvus = True
    isUpdate = False 
    updateSuccess = True  
    embs_duplicate_code = []

    ## VHM API: auth to get token
    vhm_url = settings.API_GET_ENROLL_TOKEN

    vhm_headers = {
        "Content-Type": "application/x-www-form-urlencoded"
    }

    vhm_data = {
        "grant_type": "client_credentials",
        'client_id': settings.CLIENT_ID_AUTHEN,
        'client_secret': settings.CLIENT_SECRET_AUTHEN
    }


    try:
        item.precheck()
        if item.userId is None:
            list_exceptions.append(BadField("userId is required!"))
        else:
            if item.userId != userId:
                list_exceptions.append(BadField(f"userId is not match. {userId} != {item.userId}!"))

        if len(list_exceptions) > 0:
            raise MultipleBadField(list_exceptions)
        
        dossiers = crud.get_all_dossier_by_userId(db, userId)
        print('len(dossiers): ',len(dossiers))
        # try:
        if len(dossiers) == 0:
            raise UserNotExist(ResponseMessage(ResponseCode.USER_NOT_EXISTED))
            
        dossier = dossiers[0]
        faceid = crud.get_dossier_by_id(db,dossier.localUserId)
        faces = crud.get_face_by_localUserId(db, dossier.localUserId) 
        
        db_image_url = faceid["imageUrls"]  # A = [3, 4, 5] 
        all_image_url = item.imageUrls # B = [3, 5, 6, 7]

        delete_urls = list(set(db_image_url) - set(all_image_url)) # List C: [6, 7]
        update_urls = list(set(all_image_url) - set(db_image_url)) # List D: [4]

        # delete_urls = db_image_url
        # update_urls = all_image_url

        logger.info(f"delete_urls: {delete_urls}") 
        logger.info(f"update_urls: {update_urls}") 

        token = None
        try:
            vhm_api_response = requests.post(vhm_url, headers=vhm_headers, data=vhm_data)
            token = vhm_api_response.json().get("access_token", None)
        except:
            url_exceptions.append(UrlException(f"Can't get token!", vhm_url))


        time_str = datetime.now().strftime("%Y%m%d")
        for img_url in update_urls:
            if token is not None:
                img_url = img_url + f"?token={token}"
                res = requests.get(img_url)
                if res.status_code == 200:
                    list_img_bytes.append(res.content)
                else:
                    url_exceptions.append(UrlException(f"{img_url} invalid!", img_url))

        if len(url_exceptions) > 0:
            raise MultipleUrlExceptions(url_exceptions)

        if len(update_urls) > 0:    
            start = time.time()

            # face_vectors, face_aligneds = face_extractor.extract_feature_batch(list_img_bytes, update_urls)
            batch_size_limit = 16
            num_images = len(list_img_bytes)
            num_batches = (num_images + batch_size_limit - 1) // batch_size_limit

            face_vectors = np.empty((0, 512), dtype=np.float32)
            face_aligneds = []

            for i in range(num_batches):
                start_index = i * batch_size_limit
                end_index = min((i + 1) * batch_size_limit, num_images)
                batch_img_bytes_slice = list_img_bytes[start_index:end_index]
                image_paths_slice = update_urls[start_index:end_index]
                
                # Call the function with the sliced batch
                batch_face_vectors, batch_face_aligneds = face_extractor.extract_feature_batch(batch_img_bytes_slice, image_paths_slice)
                
                # Add the batch results to the main lists
                face_vectors = np.vstack((face_vectors, batch_face_vectors))
                face_aligneds.extend(batch_face_aligneds)

            # Process the results in face_vectors and face_aligneds

            # print("face_vector shape: " , face_vectors.shape) 
            # print("face_aligneds shape: ", len(face_aligneds))


            logger.info(f"Extractor: {time.time() - start}")

            ## check1 all images are the same person

            if not np.all(face_vectors.dot(face_vectors.T) > settings.FACE_ENROLL_THRESHOLD):
                response.code = ResponseCode.REG_IMAGE_IS_NOT_THE_SAME
                response.data = [
                    {
                        "description": "All of enroll images are not of the same person!"
                    }
                ]
                the_same_person_exceptions.append(TheSamePersonException(f"All of enroll images are not of the same person!"))
                isUpdate = False
                updateSuccess = False  
            else: 
                isUpdate = True
            

            if len(the_same_person_exceptions) > 0:
                raise TheSamePersonException(the_same_person_exceptions) 
            
            # check2 Not the same as the images enroll before! 
            if userId is not None:
                dossiers = crud.get_all_dossier_by_userId(db, userId)
        
            if len(dossiers) > 0:
                latest_dossier = dossiers[-1]
                latest_embs = latest_dossier.to_dict()["vectors"]
                # print("print embedding: ", latest_dossier.to_dict()["vectors"])
                # print("Local user ID", latest_dossier.to_dict()["localUserId"]) 
                latest_embs = np.array([np.frombuffer(base64.b64decode(emb), dtype=np.float32) for emb in latest_embs])
                score_matching = face_vectors.dot(latest_embs.T)
                if np.all(score_matching > settings.FACE_ENROLL_THRESHOLD):
                    needToSearchMilvus = True 
                    isUpdate = True
                else:
                    response.code = ResponseCode.REG_IMAGE_IS_NOT_THE_SAME
                    response.data = [
                        {
                            "description": "Not the same as the images enroll before !"
                        }
                    ]
                    the_same_person_exceptions.append(TheSamePersonException("Not the same as the images enroll before !"))
                    isUpdate = False
                    updateSuccess = False  
                needToSearchMilvus = True 
                isUpdate = True
            
            if len(the_same_person_exceptions) > 0:
                raise TheSamePersonException(the_same_person_exceptions) 
            
            ## check3 : search milvus to ensure the same person

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
                            existed_userId = existed_dossier["userId"]
                            logger.info(f"Search mivus UserId: {existed_userId}, Truth userId: {latest_dossier.userId}")
                            if latest_dossier.userId == existed_userId :
                                isUpdate = True
                            else:
                                response.data = [
                                    {
                                        "description": f"Search mivus UserId: {existed_userId}, Truth userId {latest_dossier.userId}"
                                    }
                                ]
                                the_same_person_exceptions.append(TheSamePersonException(f"Not the same as the images enroll before !")) 
                                isUpdate = False
                                updateSuccess = False 

            
            if len(the_same_person_exceptions) > 0:
                raise TheSamePersonException(the_same_person_exceptions)  

            # Add all update vector to databases and milvus 
            if isUpdate:
                localUserId = dossier.localUserId 
                logger.info(f"localUserId = {localUserId} . Add all update vector to databases and insert into milvus") 
                updated_dossier = crud.get_dossier_by_id(db, localUserId)
                updated_dossier["imageUrls"] = []
                updated_dossier["vectors"] = []
                for face_vector, face_aligned, original_url in zip(face_vectors, face_aligneds, update_urls):
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

                updateSuccess = True 

            # Delete imageUrls
        if len(delete_urls) > 0 and updateSuccess:
            for face in faces:
                for remove_url in delete_urls: 
                    if face.original_photo == remove_url : 
                        effective_rows = crud.delete_face_by_id(db, face.id)
                        assert effective_rows > 0
                        assert milvus_client.delete_faces([face.id])
                        old_milvus_data.append(face)
                        logger.info(f"Remove image from localUserId: {face.localUserId}, with face id: {face.id} and original_photo: {face.original_photo}")
        elif len(delete_urls) > 0 and updateSuccess == False:  
            logger.info("failure to delete images")
            response.data = [
                 {
                     "description": "failure to delete images"
                 }
             ]
            the_same_person_exceptions.append(TheSamePersonException("failure to delete images"))
            
            if len(the_same_person_exceptions) > 0:
                raise TheSamePersonException(the_same_person_exceptions) 

        db.commit()
        db.close() 
        db = get_db_connection() 
        dossier_update = crud.get_all_dossier_by_userId(db, userId)[0]
        # print(dossier_update.to_dict())
        response.code = ResponseCode.SUCCESSFUL
        response.data = [dossier_update.to_dict()]

    except Exception as e:
        # db.rollback()

        logger.info("Rollback Database and Milvus!")
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

        traceback.print_exc()

        if isinstance(e, MultipleBadField):
            response.code = ResponseCode.BAD_REQUEST
            response.data = [
                {
                    "description": e.messages
                }
            ]
        # else:
        #     response.code = ResponseCode.USER_NOT_EXISTED
        #     response.data = {
        #         "userId": userId
        #     }
        if isinstance(e,UserNotExist):
            response.code = ResponseCode.USER_NOT_EXISTED
            response.data = [
                {
                    "description": e.message
                }
            ]

        if isinstance(e, MultipleFaceException):
            print("CODE RESPONSE: ", e.code_responses) 
            if len(e.code_responses) > 0:
                # response.code = mode(e.code_responses) 
                response.code = e.code_responses
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
        elif isinstance(e, TheSamePersonException):
            response.code = ResponseCode.REG_IMAGE_IS_NOT_THE_SAME
            response.data = [
                {
                    "description": e.message
                }
            ]

        else:
            if response.code is None:
                response.code = ResponseCode.INTERNAL_SERVER_ERROR

    finally:
        
        db.commit()
        logger.info("Closed database connection!")
        db.close()
        if isinstance(response.code,int):
            response.code = [response.code]
        response.message = [ResponseMessage(x) for x in response.code]
        # response.message = ResponseMessage(response.code)
        # return JSONResponse(jsonable_encoder(response))
        response_2 = []
        len_ = len(response.message)
        for index in range(len_):
            temp = {
                'request_id': response.request_id,
                'code': response.code[index],
                # 'data': [{
                #     'urls': response.data[0]['urls'][index],
                #     "description": response.data[0]['description'][index]
                # }],
                'message':response.message[index]
            }
            if response.data[0].get('urls'):
                temp['data'] = [{
                    'urls': response.data[0]['urls'][index],
                    "description": response.data[0]['description'][index]
                }]
            else:
                temp['data'] = response.data
            response_2.append(temp)
        return JSONResponse(jsonable_encoder(response_2))