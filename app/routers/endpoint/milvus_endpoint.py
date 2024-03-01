import logging
import time
import traceback

from fastapi.encoders import jsonable_encoder
from fastapi.responses import JSONResponse
import numpy as np
import base64

from common.milvus.milvus import MilvusClient
from common.database import crud, models
from common.database.database import engine, get_db_connection
from configs.configs import Settings
from ..api_response_schemas import BaseResponse, ResponseCode, ResponseMessage
from ..api_request_schemas import VectorFaceRequest
from utils.logging import TimingLog

models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()



# Search Face by vector 

async def search_face_by_vector(item: VectorFaceRequest):
    milvus_client = MilvusClient()
    response = BaseResponse()
    db = get_db_connection()
    start = time.time()
    
    try:
        search_milvus_start = time.time()
        face_embedding = item.vector
        face_embedding = base64.b64decode(face_embedding)
        face_embedding = np.frombuffer(face_embedding, dtype=np.float32)

        face_embedding = (face_embedding / np.linalg.norm(face_embedding)).reshape(-1, 512)

        matching_face = milvus_client.search_topK_face(face_embedding, 1)[0]
        if matching_face == -1:
            response.data = [
                {
                    "description": "Searching in Milvus failed, please restart service and retry again!!"
                }
            ]
            raise Exception("Searching in Milvus failed, please restart service and retry again!!")

        elif matching_face is not None:
            timing_log.search_milvus.update(time.time() - search_milvus_start)
            matching_face = matching_face[0]
            response.code = ResponseCode.SUCCESSFUL
            search_sql_start = time.time()
            faceid = crud.get_face_by_id(db, matching_face.id)
            dossier = crud.get_dossier_by_id(db, faceid.localUserId)
            response.data = dossier
            timing_log.search_sql.update(time.time() - search_sql_start)
            response.data["score"] = matching_face.distance
        else:
            response.code = ResponseCode.USER_NOT_EXISTED

    except Exception as e:
        traceback.print_exc()
        response.code = ResponseCode.INTERNAL_SERVER_ERROR

    finally:
        db.close()
        response.message = ResponseMessage(response.code)
        timing_log.complete_time.update(time.time() - start)
        print(vars(timing_log))
        return JSONResponse(jsonable_encoder(response))

# Get number of embedding in Milvus

async def get_number_embedding():
    milvus_client = MilvusClient()
    logger.info(f"milvus_client.client.num_entities: {milvus_client.get_number_entities()}")

# Restore Milvus

async def restore_milvus():
    db = get_db_connection()

    milvus_client = MilvusClient()
    milvus_client.reinit()

    try:
        embs = []
        face_ids = []
        list_dossiers = db.query(models.Dossier).all()
        for user in list_dossiers:
            for face in user.faces:
                face_embedding = base64.b64decode(face.face_embedding)
                face_embedding = np.frombuffer(face_embedding, np.float32).tolist()
                embs.append(face_embedding)
                face_ids.append(face.id)

        for i in range(0, len(face_ids), 10000):
            milvus_client.client.insert(settings.MILVUS_COLLECTION_NAME, records=embs[i:i+10000], ids=face_ids[i:i+10000])
            milvus_client.client.flush()

        logger.info(f"Database face: {len(embs)} - current {milvus_client.get_number_entities()}")
    except:
        traceback.print_exc()

    finally:
        db.close()

