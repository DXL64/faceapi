tag=$1

docker run -dt --rm --name api_builder face-api:v1.0
docker cp app api_builder:/tmp
docker cp setup/encrypt.sh api_builder:/tmp
docker exec -i -w /tmp/app api_builder bash /tmp/encrypt.sh
docker cp api_builder:/tmp/app/shared.tar.gz setup/service_api_shared_${tag}.tar.gz
cp setup/service_api_shared_${tag}.tar.gz setup/service_api_shared.tar.gz
docker stop api_builder
	

# DOCKER_BUILDKIT=1 docker build -f setup/delivery.Dockerfile -t vf-api:v1.1 .
