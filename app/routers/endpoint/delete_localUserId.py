import logging
import traceback

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse
import numpy as np
import base64

from common.milvus.milvus import MilvusClient, MilvusFaceIDObject
from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage


models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)


async def delete_localUserId(localUserId: int):
    db = get_db_connection()
    response = BaseResponse()
    milvus_client = MilvusClient()
    data = crud.get_face_by_localUserId(db, localUserId)
    face_ids = [face.id for face in data]
    isDeletedMilvus = False
    try:
        if len(face_ids) == 0:
            response.code = ResponseCode.USER_NOT_EXISTED
            response.data = {
                "localUserId": localUserId
            }
            response.message = ResponseMessage(response.code)
            db.close()
            return JSONResponse(jsonable_encoder(response))

        isDeletedMilvus = milvus_client.delete_faces(face_ids)
        effected_rows = crud.delete_dossier_by_id(db, localUserId)
        assert effected_rows > 0
        response.code = ResponseCode.SUCCESSFUL
        response.data = {}
    except Exception as e:
        logger.info(e)
        # SQL rollback
        db.rollback()
        # # Milvus rollback
        if isDeletedMilvus:
            for face in data:
                old_embedding = np.frombuffer(base64.b64decode(face.face_embedding), dtype=np.float32)
                milvusFace = MilvusFaceIDObject(face_id=face.id, localUserId=face.localUserId, embeddings=old_embedding)
                milvus_client.insert_face(milvusFace)

        traceback.print_exc()
        response.code = ResponseCode.INTERNAL_SERVER_ERROR
    finally:
        response.message = ResponseMessage(response.code)
        db.commit()
        logger.info("Closed database connection!")
        db.close()
        return JSONResponse(jsonable_encoder(response))
