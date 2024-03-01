docker run -dt \
    --restart always \
    --name postgres_dev \
    -e POSTGRES_USER=root \
    -e POSTGRES_PASSWORD="123456aA@" \
    -e POSTGRES_DB=avnet_faceid \
    -p 5432:5432 \
    -v ${PWD}/database/postgres_init.sql:/docker-entrypoint-initdb.d/file.sql \
    -v "${PWD}/volumes/postgresql:/var/lib/postgresql" \
    postgres:latest