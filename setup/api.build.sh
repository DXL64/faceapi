#! /bin/bash
DOCKER_BUILDKIT=1 docker build -f setup/api.Dockerfile -t face-api:v1.0 .