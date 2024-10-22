import logging
from datetime import datetime

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse


from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage
from ..api_request_schemas import ListRegisterRequest
from utils.logging import TimingLog

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()


async def get_list_registers(item: ListRegisterRequest):
    lastTimeRequest = item.lastTimeRequest
    db = get_db_connection()
    response = BaseResponse()

    current_time_ms = datetime.timestamp(datetime.now()) * 1e3
    response.code = ResponseCode.SUCCESSFUL
    if lastTimeRequest > current_time_ms:
        response.code = ResponseCode.INVALID_REQUEST_TIME
        response.data = {
            "time": current_time_ms
        }
    else:
        results = crud.get_face_list(db)
        response.data = results
    
    response.message = ResponseMessage(response.code)
    logger.info("Closed database connection!")
    db.close()
    return JSONResponse(jsonable_encoder(response))
