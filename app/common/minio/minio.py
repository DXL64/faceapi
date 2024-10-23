from typing import AnyStr
import io
import boto3
from botocore.config import Config

import logging
logger = logging.getLogger(__name__)

from configs.configs import Settings
settings = Settings()


class MinioClient:
    def __init__(self) -> None:
        self.resource = boto3.resource('s3', 
                    endpoint_url=f'{settings.MINIO_ENDPOINT_URL}',
                    aws_access_key_id=f'{settings.MINIO_ACCESS_KEY}',
                    aws_secret_access_key=f'{settings.MINIO_SECRET_KEY}',
                    config=Config(signature_version='s3v4'),
                )
    
    def send_obj(self, obj: AnyStr, path: str):
        self.resource.Object(f"{settings.MINIO_BUCKET}", path).put(Body=obj)

    def send_obj_with_bucket(self, obj: AnyStr, path: str, bucket: str):
        res = self.resource.Object(f"{bucket}", path).put(Body=obj)
        print(res)

    def load_obj(self, path):
        bytes_buffer = self.resource.Object(f"{settings.MINIO_BUCKET}", path).get()["Body"].read()
        return bytes_buffer