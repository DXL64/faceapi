CREATE DATABASE IF NOT EXISTS vhdc_faceid;
USE vhdc_faceid;
CREATE TABLE dossier
(
    localUserId         INT AUTO_INCREMENT PRIMARY KEY comment 'localUserID manager by vinbdi - force',
    userId              VARCHAR(128) NULL comment 'userID manager by vinhome - force',
    credential          VARCHAR(12) NULL comment 'no force',
    name                VARCHAR(255) NULL comment 'no force',
    description         VARCHAR(255) NULL comment 'no force',
    department          VARCHAR(255) NULL comment 'no force',
    type                VARCHAR(15) NULL comment 'no force',
    expired             DATETIME NULL comment 'no force',
    lastUpdate          DATETIME NULL comment 'no force',
    isForceUpdate       BOOLEAN NULL comment 'force'
);

CREATE TABLE faceid
(
    id                  INT AUTO_INCREMENT PRIMARY KEY,
    localUserId              INT          NULL,
    face_embedding      BLOB         NULL,
    original_photo      VARCHAR(1000) NULL,
    normalized_photo    VARCHAR(1000) NULL,
    lastUpdate          DATETIME     NULL,
    CONSTRAINT faceid_dossier_null_fk
        FOREIGN KEY (localUserId) REFERENCES dossier (localUserId) ON DELETE CASCADE
);
