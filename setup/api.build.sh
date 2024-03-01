#! /bin/bash
docker build -f setup/api.Dockerfile -t api:local \
                               --add-host=uat-minio-vinfast.vsmart.net:10.144.16.40 \
                               .

docker tag api:local face-api:v1.0
