import logging
from datetime import datetime
import traceback
import uuid
from unidecode import unidecode
import multiprocessing as mp

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse
import cv2
import numpy as np
import requests

from common.ai_pipelines.FaceExtractor import FaceExtractor, MultipleFaceException
from common.milvus.milvus import MilvusClient
from common.database import crud, models
from common.database.database import engine, get_db_connection
from common.vhm_api.upload import upload_by_vhm_api
from configs.configs import Settings
from ..api_response_schemas import ResponseCode, ResponseMessage, MultipleUrlExceptions, UrlException, SearchFaceResponse
from ..api_request_schemas import MultipleBadField, SearchFaceFHDRequest
from utils.logging import TimingLog
from statistics import mode

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

async def search_user_by_fhd_image(item: SearchFaceFHDRequest):
    
    response = SearchFaceResponse()
    pool = mp.Pool(1)
    try:
        item.precheck()
        print("precheck ok")
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
    milvus_client = MilvusClient()
    extractor = FaceExtractor()
    db = get_db_connection()

    logger.info(f"Request {response.request_id}: {item}")
    try:
        res = requests.get(item.imageUrl)
        if res.status_code != 200:
            raise MultipleUrlExceptions([UrlException(f"{item.imageUrl} invalid!", item.imageUrl)])

        img_bytes = res.content
        # rois = [[x + settings.PADDING_PIXEL for x in sublist] for sublist in item.rois]

        cv2_img, face_embeddings, bboxes, ROIs = extractor.extract_feature2(img_bytes, item.rois)

        if ROIs:
            for roi in ROIs:
                roi_temp = np.array(roi).astype('int').reshape((-1,1,2))
                cv2_img = cv2.polylines(cv2_img,[roi_temp],True,(0,0,255),3)

        response.data = []
        if len(face_embeddings) > 0:
            for emb, bbox in zip(face_embeddings, bboxes):
                cv2_img = cv2.rectangle(cv2_img, (int(bbox[0]), int(bbox[1])), (int(bbox[2]), int(bbox[3])), (0, 0, 255), 1)
                text = "unknown"

                matching_face = milvus_client.search_topK_face(emb, topK=1)[0]
                if matching_face is not None and matching_face != -1:
                    matching_face = matching_face[0]
                    faceid = crud.get_face_by_id(db, matching_face.id)
                    localUserId = faceid.localUserId
                    dossier = crud.get_dossier_by_id(db, localUserId)
                    dossier["score"] = matching_face.distance
                    response.data.append(dossier)
                    score = matching_face.distance 
                    if score >= settings.FACE_MATCHING_THRESHOLD:
                        text = f" {score:0.2f}"
                        if dossier["userId"]:
                            text = dossier["userId"] + text
                        if dossier["name"]:
                            text = unidecode(dossier["name"]) + " " + text

                x, y = int(bbox[0]), int(bbox[1])
                font = cv2.FONT_HERSHEY_SIMPLEX
                text_size, _ = cv2.getTextSize(text, font, 1, 1)
                text_w, text_h = text_size
                cv2_img = cv2.rectangle(cv2_img, (x, y), (x + text_w, y + text_h), (0, 0, 0), -1)
                cv2_img = cv2.putText(cv2_img, text, (x, y + text_h + 1 - 1), font, 1, (255, 255, 255), 1)
                # cv2.imwrite("test.jpg",cv2_img)

        else:
            response.data = [
                {
                    "description": "No face or face not good to recognize in image!!"
                } 
            ]

        uuid_str = uuid.uuid4()
        time_str = datetime.now().strftime("%Y%m%d")
        event_path = f"event/{time_str}/{uuid_str}.jpg"
        img_encode = cv2.imencode(".jpg", cv2_img)[1].tostring()

        logging.info("Uploading to vf-storage ...")
        upload_response = pool.apply_async(upload_by_vhm_api, args=(event_path, img_encode,)).get(timeout=settings.UPLOAD_TIMEOUT)
        logging.info(f"UPLOAD_RESPONSE: {upload_response}")
        if upload_response.get("code", None) != 200:
            raise UrlException("Upload fail", "")
        response.result_pic_url = upload_response.get("data", None).get("url", None)
        logger.info(f"result_pic_url: {response.result_pic_url}")
        logger.info("name: {}".format(upload_response.get("data", None).get("name", None)))

        if len(face_embeddings) > 0:
            number_face = len(face_embeddings)
            unknown = 0
            for data in response.data:
                if data["score"] < settings.FACE_MATCHING_THRESHOLD : 
                    unknown += 1
            if unknown == number_face : 
                response.code = ResponseCode.USER_NOT_FOUND
            else: 
                response.code = ResponseCode.SUCCESSFUL
        elif len(face_embeddings) == 0 :
            response.code = ResponseCode.NO_FACE_DETECTED

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
        elif isinstance(e, mp.TimeoutError):
            response.code = ResponseCode.UPLOAD_EVENT_TIMEOUT
            logging.info(f"Timeout upload: {settings.UPLOAD_TIMEOUT}s")
        elif isinstance(e, UrlException):
            response.code = ResponseCode.UPLOAD_EVENT_ERROR
        else:
            response.data = []
            response.code = ResponseCode.INTERNAL_SERVER_ERROR

    finally:
        pool.close()
        db.close()
        response.message = ResponseMessage(response.code)
        return JSONResponse(jsonable_encoder(response))

