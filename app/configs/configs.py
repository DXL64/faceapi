from pydantic import BaseSettings
import json
import os 
import logging
logger = logging.getLogger("app." + __name__)
def singleton(class_):
    instances = {}

    def getinstance(*args, **kwargs):
        if class_ not in instances:
            instances[class_] = class_(*args, **kwargs)
        return instances[class_]

    return getinstance


@singleton
class Settings():

    def __init__(self):
        # try:
            CONFIG = os.getenv("CONFIG",'/home/sysadmin/configs/config.json')
            if not os.path.isfile(CONFIG):
                raise Exception("CONFIG path does not exist")
            with open(CONFIG) as f:
                params = json.load(f)['devconfig']

            upload_token_config = params.get('upload_token_config')
            self.API_GET_UPLOAD_TOKEN = upload_token_config["api_get_upload_token"]
            self.API_GET_ENROLL_TOKEN = upload_token_config["api_get_enroll_token"]
            self.API_UPLOAD_EVENT = upload_token_config["api_upload_event"]
            self.CLIENT_ID_AUTHEN = upload_token_config["client_id_authen"]
            self.CLIENT_SECRET_AUTHEN = upload_token_config["client_secret_authen"]
            self.UPLOAD_TIMEOUT = upload_token_config["upload_timeout"]
            # self.VHDC_HEADERS = upload_token_config["vhdc_headers"]
            # self.VHDC_DATA = upload_token_config["vhdc_data"]

            minio = params['minio']
            self.MINIO_HOST = minio["minio_host"]
            self.MINIO_PORT = minio["minio_port"]
            self.MINIO_ACCESS_KEY = minio["minio_access_key"] 
            self.MINIO_SECRET_KEY = minio["minio_secret_key"] 
            self.MINIO_BUCKET = minio["minio_bucket"] 
            self.MINIO_ENDPOINT_URL = minio["minio_endpoint_url"]
            self.MINIO_PUBLIC_ENDPOINT_URL = minio["minio_public_endpoint_url"]

            milvus = params['milvus']
            self.MILVUS_HOST = milvus["milvus_host"] 
            self.MILVUS_PORT = milvus["milvus_port"]
            self.MILVUS_COLLECTION_NAME = milvus["milvus_collection_name"]


            postgresql = params['postgresql']
            self.POSTGRESQL_DB_HOST = postgresql["postgresql_db_host"] 
            self.POSTGRESQL_DB_PORT = postgresql["postgresql_db_port"] 
            self.POSTGRESQL_DB_NAME = postgresql["postgresql_db_name"] 
            self.POSTGRESQL_DB_USER = postgresql["postgresql_db_user"] 
            self.POSTGRESQL_DB_PASSWORD = postgresql["postgresql_db_password"] 
            self.POSTGRESQL_SCHEMA_NAME = postgresql["postgresql_schema_name"] 

            self.SECRET_TOKEN = params["secret_token"] 

            model_serving = params['model_serving']
            self.FACE_ENROLL_THRESHOLD = model_serving["face_enroll_threshold"] 
            self.FACE_ENROLL_THRESHOLD_MILVUS = model_serving["face_enroll_threshold_milvus"] 
            self.FACE_MATCHING_THRESHOLD = model_serving["face_matching_threshold"] 
            self.FACE_DETECTION_THRESHOLD = model_serving["face_detection_threshold"]
            self.FACE_SIZE = model_serving["face_size"] 
            self.TRITON_URL = model_serving["url"] 

            self.PYTHONIOENCODING = params.get("pythonioencoding","UTF-8")

            system = params['system']
            self.ENROLL_IMAGES_LIMIT = system["enroll_images_limit"]
            self.PORT_API = system['port_api']
            self.WOKERS = system['workers']

            print('init')
        # except:
            # logger.error("invalid config!")
# Settings = Config()