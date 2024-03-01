from urllib.parse import quote_plus

from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker

from configs.configs import Settings

settings = Settings()

DATABASE_URL = f"postgresql://{settings.POSTGRESQL_DB_USER}:{quote_plus(settings.POSTGRESQL_DB_PASSWORD)}@{settings.POSTGRESQL_DB_HOST}:{settings.POSTGRESQL_DB_PORT}/{settings.POSTGRESQL_DB_NAME}"
print("DATABASE_URL: ",DATABASE_URL)
engine = create_engine(
    DATABASE_URL, pool_size=100, max_overflow=0, pool_pre_ping=True,
    connect_args={'options': f'-c search_path={settings.POSTGRESQL_SCHEMA_NAME}'}
)

SessionLocal = sessionmaker(autocommit=False, autoflush=False, bind=engine)

Base = declarative_base()


def get_db_connection():
    db = SessionLocal()
    return db
