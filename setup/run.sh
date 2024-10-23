## PROD
# docker run -dt --restart always --network=host \
#            --env-file /opt/vf_face_api/environments.env \
#            -v /etc/hosts:/etc/hosts --cpuset-cpus="16,17,48,49" \
#            --name vf_face_api vbdi-hub.io:5000/vf-api:v1.1 \
#            conda run --no-capture-output -n vinfast \
#            uvicorn main:app --host 0.0.0.0 --workers 4 --port 30000

## DEV
        #    --env-file setup/environments.env \
docker run -dt --restart always --network=host \
           -v /etc/hosts:/etc/hosts -v ./app:/opt/faceapi/service-api/ \
           --name face_api face-api:v1.0 \
          conda run --no-capture-output -n faceapi \
          uvicorn main:app --host 0.0.0.0 --workers 1 --port 30000
