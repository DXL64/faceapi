-- CREATE DATABASE IF NOT EXISTS faceid;
-- USE faceid;
\c faceid 

CREATE SCHEMA faceid_dev;
set search_path='faceid_dev';

CREATE TABLE dossier
(
    "localUserId"         SERIAL PRIMARY KEY, -- SERIAL is equivalent to AUTO_INCREMENT in PostgreSQL
    "userId"              VARCHAR(128),
    credential          VARCHAR(12),
    name                VARCHAR(255),
    description         VARCHAR(255),
    department          VARCHAR(255),
    type                VARCHAR(15),
    expired             TIMESTAMP,
    "lastUpdate"          TIMESTAMP,
    "isForceUpdate"       smallint
);

-- Table: faceid
CREATE TABLE faceid
(
    id                  SERIAL PRIMARY KEY,
    "localUserId"         INT,
    face_embedding      BYTEA,
    original_photo      VARCHAR(1000),
    normalized_photo    VARCHAR(1000),
    "lastUpdate"          TIMESTAMP,
    CONSTRAINT faceid_dossier_null_fk
        FOREIGN KEY ("localUserId") REFERENCES dossier ("localUserId") ON DELETE CASCADE
);
-- INSERT INTO dossier (name) VALUES ('chinhdv1'),('chinhdv2');