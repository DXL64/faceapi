#! /bin/bash
DOCKER_BUILDKIT=1 docker build -f setup/api.Dockerfile -t api:local .

docker tag api:local face-api:v1.0
