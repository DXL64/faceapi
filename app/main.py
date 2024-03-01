import time
import threading
from fastapi import FastAPI, Request
import os
from common.milvus.milvus import MilvusClient
from configs.configs import Settings
from routers import dossier
import uvicorn
from common.database.database import engine, get_db_connection
import traceback
from common.database import crud, models
from utils.start_up import start_up
import logging
from utils.logging import LOGGING

app = FastAPI()
app.include_router(dossier.router)

settings = Settings()
milvus_thread = threading.Thread(target=MilvusClient.check_status, args=(3, 30,))
milvus_thread.start()


os.makedirs("/opt/vinbigdata/service-api/logs", exist_ok=True)
logging.config.dictConfig(LOGGING)
logger = logging.getLogger(__name__)


app = FastAPI()
app.include_router(dossier.router)
@app.middleware("http")
async def log_requests(request: Request, call_next):
    start_time = time.time()
    response = await call_next(request)
    process_time = (time.time() - start_time) * 1000
    formatted_process_time = '{0:.2f}'.format(process_time)
    logger.info(f"{request.url.path} completed_in={formatted_process_time}ms status_code={response.status_code}")
    return response
    

@app.get("/")
async def root():
    return {f"message": f"Face Service API"}


if __name__ == '__main__':
    start_up()
    uvicorn_config = uvicorn.Config(app, host="0.0.0.0", port=settings.PORT_API, workers=settings.WOKERS)
    server = uvicorn.Server(uvicorn_config)
    server.run()