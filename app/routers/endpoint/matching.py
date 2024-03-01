import logging
import traceback

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse
import numpy as np
import requests

from common.ai_pipelines.FaceExtractor import FaceExtractor, MultipleFaceException
from common.database import models
from common.database.database import engine
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage, MultipleUrlExceptions, UrlException
from ..api_request_schemas import CompareFaceRequest
from utils.logging import TimingLog
from statistics import mode

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

# @router.put("/matching/")
async def matching(item: CompareFaceRequest):
    assert len(item.imageUrls) == 2, "Number imageUrls should be 2!"
    
    extractor = FaceExtractor()
    response = BaseResponse()

    list_img_bytes = []
    url_exceptions = []
    try:
        for img_url in item.imageUrls:
            res = requests.get(img_url)
            if res.status_code == 200:
                list_img_bytes.append(res.content)
            else:
                url_exceptions.append(UrlException(f"{img_url} invalid!", img_url))

        if len(url_exceptions) > 0:
            raise MultipleUrlExceptions(url_exceptions)

        face_embeddings, _ = extractor.extract_feature_batch(list_img_bytes, item.imageUrls)

        similarity = np.dot(face_embeddings[0], face_embeddings[1]).item()
        response.data = {
            "score": similarity
        }
        if similarity > settings.FACE_MATCHING_THRESHOLD:
            response.data["identical"] = True
        else:
            response.data["identical"] = False
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
        response.message = ResponseMessage(response.code)
        return JSONResponse(jsonable_encoder(response))
