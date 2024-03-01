import logging
import traceback

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse

from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage
from utils.logging import TimingLog

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

async def get_localUserId(localUserId: int):
    db = get_db_connection()
    response = BaseResponse()
    try:
        data = crud.get_dossier_by_id(db, localUserId)
        response.code = ResponseCode.SUCCESSFUL
        response.data = data
    except:
        traceback.print_exc()
        response.code = ResponseCode.USER_NOT_EXISTED
        response.data = {
            "userId": localUserId
        }
    finally:
        response.message = ResponseMessage(response.code)
        logger.info("Closed database connection!")
        db.close()
        return JSONResponse(jsonable_encoder(response))

# Search User By Face