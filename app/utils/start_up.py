from common.milvus.milvus import MilvusClient
from milvus import Milvus
from common.database.database import get_db_connection
import traceback
import logging 
import base64
import numpy as np
import time 
from common.database import crud, models
from configs.configs import Settings
settings = Settings()
logger = logging.getLogger(__name__)

def start_up():
    while not MilvusClient.state:
        time.sleep(1)
    logger.info("Restoring... milvus at startup !!!")
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
        logger.info("Restore milvus failure !!!")
    finally:
        db.close()
    logger.info("Restore milvus success !!!")