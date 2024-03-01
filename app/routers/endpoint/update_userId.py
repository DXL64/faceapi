import logging
import traceback

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse

from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage
from ..api_request_schemas import UpdateRequest, MultipleBadField, BadField
from utils.logging import TimingLog

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

# Update userId
async def update_userId(userId: str, item: UpdateRequest):
    # check some condition
    db = get_db_connection()
    response = BaseResponse()
    logger.info(f"Request {response.request_id}: {item}")

    list_exceptions = []
    try:
        item.precheck(ignoreForceUpdate=True)
        if item.userId is None:
            list_exceptions.append(BadField("userId is required!"))
        else:
            if item.userId != userId:
                list_exceptions.append(BadField(f"userId is not match. {userId} != {item.userId}!"))

        if len(list_exceptions) > 0:
            raise MultipleBadField(list_exceptions)
        
        dossier = crud.get_all_dossier_by_userId(db, userId)[0]
        item.isForceUpdate = dossier.isForceUpdate
        dossier = crud.update_dossier_by_userId(db, **item.dict())
        response.code = ResponseCode.SUCCESSFUL
        response.data = dossier

    except Exception as e:
        db.rollback()
        traceback.print_exc()
        if isinstance(e, MultipleBadField):
            response.code = ResponseCode.BAD_REQUEST
            response.data = [
                {
                    "description": e.messages
                }
            ]
        else:
            response.code = ResponseCode.USER_NOT_EXISTED
            response.data = {
                "userId": userId
            }

    finally:
        response.message = ResponseMessage(response.code)
        db.commit()
        logger.info("Closed database connection!")
        db.close()
        return JSONResponse(jsonable_encoder(response))
