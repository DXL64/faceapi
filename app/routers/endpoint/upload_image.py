import time
import uuid
import logging
import traceback
import base64
import cv2
import requests
import numpy as np
from typing import List
from datetime import datetime

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse

from common.ai_pipelines.FaceExtractor import FaceExtractor, MultipleFaceException
from common.milvus.milvus import MilvusClient, MilvusFaceIDObject
from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import UploadResponse, ResponseCode, ResponseMessage, MultipleUrlExceptions, UrlException
from ..api_request_schemas import UploadRequest, MultipleBadField
from common.minio import MinioClient
from utils.logging import TimingLog
from statistics import mode

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

async def upload_image(item: UploadRequest):
    face_extractor = FaceExtractor()
    response = UploadResponse()
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
    
    start = time.time()
    milvus_client = MilvusClient()
    logger.info(f"Milvus init time: {time.time() - start}")

    db = get_db_connection()
    face_ids = []
    try:
        minio_client = MinioClient()
        minio_is_work = True
        logger.info(f"Minio is working!")
    except: 
        minio_is_work = False
        logger.error(f"Minio is not working!")
    
    list_img_bytes = []
    url_exceptions = []

    try:
        for img_url in imagesUrls:
            res = requests.get(img_url)
            if res.status_code == 200:
                list_img_bytes.append(res.content)
            else:
                url_exceptions.append(UrlException(f"{img_url} invalid!", img_url))

        if len(url_exceptions) > 0:
            raise MultipleUrlExceptions(url_exceptions)

        start = time.time()
        face_vectors, face_aligneds, face_ori_url = face_extractor.extract_multi_feature_batch(list_img_bytes, imagesUrls)
        logger.info(f"Extractor: {time.time() - start}")

        data_created_face = [{}]
        for face_vector, face_aligned, original_url in zip(face_vectors, face_aligneds, face_ori_url):
            milvusFace = MilvusFaceIDObject(face_id=0, embeddings=face_vector)
            uuid_milvus = milvus_client.insert_face(milvusFace)
            norm_path = f"{uuid_milvus[0]}_norm.jpg"

            assert uuid_milvus, "Insert Milvus failed!"

            if minio_is_work:
                # Send photo to minio
                print(face_aligned.shape)
                img_encode = cv2.imencode(".jpg", np.transpose(face_aligned, (1, 2, 0)))[1].tostring()
                minio_client.send_obj(img_encode, norm_path)
            else:
                norm_path = ""
            embedding_encoded = base64.b64encode(face_vector)
            created_face = crud.create_face(db, faceId=uuid_milvus[0],
                                            original_photo=original_url,
                                            norm_photo=norm_path,
                                            normalized_photo=norm_path, 
                                            face_embedding=embedding_encoded)
            face_ids.append(created_face.faceId)
            data_created_face.append(created_face.to_dict())
            logger.info(f"Image {original_url} insert face_id: {created_face.faceId}")

        response.code = ResponseCode.FACE_CREATED_SUCCESS
        response.data = data_created_face

    except Exception as e:
        # Database Rollback
        logger.info("Rollback database and Milvus!")
        db.rollback()

        # Milvus Rollback
        for id_ in face_ids:
            milvus_client.delete_faces([id_])
            logger.info(f"Remove face_id: {id_}")

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