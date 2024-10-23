CREATE SCHEMA face;
set search_path='face';

-- CREATE DATABASE IF NOT EXISTS face_database;
-- USE face_database;

CREATE TABLE face
(
    faceId              SERIAL PRIMARY KEY,
    original_photo      VARCHAR(1000) NULL,
    norm_photo          VARCHAR(1000) NULL,
    face_embedding      BLOB         NULL,
    lastUpdate          DATETIME     NULL
);
