import logging
import traceback

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse
import cv2
import numpy as np
import base64
import requests

from common.ai_pipelines.FaceExtractor import FaceExtractor, MultipleFaceException
from common.milvus.milvus import MilvusClient
from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage, MultipleUrlExceptions, UrlException
from ..api_request_schemas import MultipleBadField, BadField
from utils.logging import TimingLog
from statistics import mode
from fastapi import File, UploadFile

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

def allowed_file(filename: str) -> bool:
        ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg'}
        return '.' in filename and filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS

def precheck(file):
    list_exceptions = []
    if file is None:
        list_exceptions.append(BadField(f"File is invalid"))
    if not allowed_file(file.filename):
        list_exceptions.append(BadField(f"File is invalid! Only take png, jpg or jpeg"))
    if len(list_exceptions) > 0:
        raise MultipleBadField(list_exceptions)
    
# Search User By Image File
async def search_user_by_file(file: UploadFile = File(...), numberRecords: int = 1):
    ## required by QC
    try:
        precheck(file)
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
    
    response = BaseResponse()
    milvus_client = MilvusClient()
    extractor = FaceExtractor()
    db = get_db_connection()

    try:
        contents = await file.read()

        img_bytes = contents
        face_embeddings, _ = extractor.extract_feature_batch([img_bytes], [""])

        matching_faces = milvus_client.search_topK_face(face_embeddings, topK=numberRecords)[0]
        if (not matching_faces) or (matching_faces[0] == -1):
            response.data = [
                {
                    "description": "Searching in Milvus failed, please restart service and retry again!!"
                }
            ]
            raise Exception("Searching in Milvus failed, please restart service and retry again!!")
        response.data = []
        
        for matching_face in matching_faces:
            if(matching_face.distance > settings.FACE_MATCHING_THRESHOLD):
                face = crud.get_face_by_id(db, str(matching_face.id))
                response.data.append(face)
        response.code = ResponseCode.SUCCESSFUL
    except Exception as e:
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
            response.code = ResponseCode.INTERNAL_SERVER_ERROR

    finally:
        db.close()
        response.message = ResponseMessage(response.code)
        return JSONResponse(jsonable_encoder(response))

# Search User By Phd Image 
