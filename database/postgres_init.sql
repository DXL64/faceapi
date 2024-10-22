CREATE SCHEMA face;
set search_path='face';

-- CREATE DATABASE IF NOT EXISTS face_database;
-- USE face_database;

CREATE TABLE face
(
    faceId              SERIAL PRIMARY KEY,
    original_photo      VARCHAR(1000) NULL,
    norm_photo          VARCHAR(1000) NULL,
    -- bbox_x              INT          0
    -- bbox_y              INT          0
    -- bbox_w              INT          0
    -- bbox_h              INT          0
    face_embedding      BLOB         NULL,
    lastUpdate          DATETIME     NULL,
);
