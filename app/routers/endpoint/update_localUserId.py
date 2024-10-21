import logging
import traceback

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse


from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage
from ..api_request_schemas import UpdateRequest, MultipleBadField
from utils.logging import TimingLog

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

# Update localUserId
async def update_localUserId(localUserId: int, item: UpdateRequest):
    db = get_db_connection()
    response = BaseResponse()
    logger.info(f"Request {response.request_id}: {item}")

    update = True
    match_userId = False
    match_credential = False

    old_userId = []
    old_credential = []
    try:
        item.precheck(ignoreForceUpdate=True)

        dossier = crud.get_dossier_by_id(db, localUserId)
        logger.info(f"Old localUserId {localUserId}: {dossier}")
        item.isForceUpdate = dossier["isForceUpdate"]

        if item.userId is not None:
            if dossier["userId"] == item.userId:
                match_userId = True
            else:
                old_userId = crud.get_all_dossier_by_userId(db, item.userId)
                logger.info(f"old_userId: {len(old_userId)}")

        if item.credential is not None:
            if dossier["credential"] == item.credential:
                match_credential = True
            else:
                old_credential = crud.get_all_dossier_by_credential(db, item.credential)
                logger.info(f"old_credential: {len(old_credential)}")

        if match_userId and match_credential:
            update = True
        else:
            if len(old_userId) > 0 or len(old_credential) > 0:
                update = False
            else:
                update = True

        if update:
            dossier = crud.update_dossier(db, localUserId, **item.dict())
            response.code = ResponseCode.SUCCESSFUL
            response.data = dossier
        else:
            if len(old_userId) > 0:
                response.code = ResponseCode.USERID_ALREADY_EXISTED
                response.data = old_userId[-1].to_dict()
                logger.info(f"userId existed! {old_userId[-1].to_dict()}")
            elif len(old_credential) > 0:
                response.code = ResponseCode.CREDENTIAL_ALREADY_EXISTED
                response.data = old_credential[-1].to_dict()
                logger.info(f"Credential existed! {old_credential[-1].to_dict()}")

    except Exception as e:
        traceback.print_exc()
        db.rollback()

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
                "localUserId": localUserId
            }

    finally:
        response.message = ResponseMessage(response.code)
        db.commit()
        logger.info("Closed database connection!")
        db.close()
        return JSONResponse(jsonable_encoder(response))
    
    