import logging
import time
import traceback
from typing import Any

from pydantic import BaseModel
from milvus import Milvus, MetricType, IndexType
from milvus.client.exceptions import NotConnectError

from configs.configs import Settings
#from .configs import _HOST, _PORT, _COLLECTION_NAME, _NPROBE, _NDIMS, _NLIST

settings = Settings()

logger = logging.getLogger(__name__)

_HOST = settings.MILVUS_HOST

_PORT = settings.MILVUS_PORT

_COLLECTION_NAME = settings.MILVUS_COLLECTION_NAME

_NLIST = 2048

_NDIMS = 512

_NPROBE = 64

_TOPK = 1


class MilvusFaceIDObject(BaseModel):
    face_id: int
    localUserId: int
    embeddings: Any


class MilvusClient:
    state: bool = True

    def __init__(self,wait_timeout=2, max_retry=1):
        if self.state:
            self.client = Milvus(_HOST, _PORT, wait_timeout=wait_timeout, max_retry=max_retry)
        else:
            raise NotConnectError("Can't connect to milvus!")

        self.collection_name = _COLLECTION_NAME

        status, has_collection = self.client.has_collection(self.collection_name)
        if not has_collection:
            logger.info(f"Initialize collection {_COLLECTION_NAME}....")
            self.init_collection()
        _, collection = self.client.get_collection_info(self.collection_name)
        print(f"Collection information: {collection}")

    def __del__(self):
        print("Milvus connection destroyed!")

    @staticmethod
    def check_status(max_retry=3, sleep_time=10):
        retry = max_retry
        start = time.time()
        status = ""
        while True:
            if retry == 0:
                MilvusClient.state = False
                status = "Can't connect to milvus!"
                time.sleep(sleep_time)
                retry = max_retry
            try:
                Milvus(_HOST, _PORT, wait_timeout=2, max_retry=1)
                status = "Connect to milvus successfull!"
                if not MilvusClient.state or time.time() - start > 300:
                    start = time.time()
                    logger.info(status)

                MilvusClient.state = True
                time.sleep(sleep_time)
                retry = max_retry
            except Exception as e:
                if isinstance(e, NotConnectError):
                    retry -= 1

    def search_topK_face(self, embedding_vectors, topK=1):
        try:
            search_params = {
                "collection_name": self.collection_name,
                "query_records": embedding_vectors,
                "top_k": topK,
                "params": {
                    "nprobe": _NPROBE
                },
            }
            logger.info(f">>>>>>>START SEARCH FACE")
            start = time.time()
            status, founds = self.client.search(**search_params)
            logger.info(f">>>>>>>END SEARCH FACE {time.time() - start}")
            if len(founds) > 0 and len(founds[0]):
                logger.info("Found matched face!")
                return founds
            return [None]
        except Exception as e:
            traceback.print_exc()
            return [-1]

    def insert_face(self, face: MilvusFaceIDObject = None):
        try:
            face_data = [face.embeddings.tolist()]
            face_ids = [face.face_id]
            start = time.time()
            self.client.insert(_COLLECTION_NAME, records=face_data, ids=face_ids)
            self.client.flush([_COLLECTION_NAME])
            logger.info(time.time() - start)
            return True
        except Exception as e:
            logger.error(f"Error occurred when insert face to milvus! {e}")
            return False
    
    def get_number_entities(self):
        return self.client.count_entities(self.collection_name)[1]

    def delete_faces(self, face_ids):
        try:
            self.client.delete_entity_by_id(_COLLECTION_NAME, id_array=face_ids)
            self.client.flush([_COLLECTION_NAME])
            return True
        except Exception as e:
            logger.error(f"Error occurred when delete face on milvus! {e}")
            return False

    def init_collection(self):
        param = {
            'collection_name': _COLLECTION_NAME,
            'dimension': _NDIMS,
            'metric_type': MetricType.IP  # optional
        }

        index_param = {
                    'nlist': _NLIST
        }
        self.client.create_collection(param)
        self.client.create_index(_COLLECTION_NAME, IndexType.FLAT, index_param)
        status, index = self.client.get_index_info(_COLLECTION_NAME)
        logger.info(f"Index information: {index} {status}")
        self.client.load_collection(_COLLECTION_NAME)
        logger.info("Create new milvus collection successfully!")

    def reinit(self):
        logger.info(f"Re-init collection {_COLLECTION_NAME}....")
        if (self.client.has_collection(_COLLECTION_NAME)):
            self.client.drop_collection(_COLLECTION_NAME)

        time.sleep(5)
        self.init_collection()
        logger.info(self.get_number_entities())
