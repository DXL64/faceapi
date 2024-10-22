import logging

from fastapi import APIRouter, Depends

from common.database import models
from common.database.database import engine
from configs.configs import Settings
from dependencies import get_token_header
from utils.logging import TimingLog


router = APIRouter(
    prefix='/api/v0/faces',
    dependencies=[Depends(get_token_header)],
    tags=['Face api'],
    responses={404: {"description": "Not found"}}
)
models.Base.metadata.create_all(bind=engine)
settings = Settings()
logger = logging.getLogger(__name__)
timing_log = TimingLog()

from .endpoint.upload_image import upload_image
router.post("")(upload_image)
# from .endpoint.enroll import enroll
# router.post("")(enroll)

# from .endpoint.enroll2 import enroll2 
# router.post("2")(enroll2)   

# from .endpoint.update_localUserId import update_localUserId 
# router.put("/local/{localUserId}")(update_localUserId)

# from .endpoint.update_userId import update_userId
# router.put("/{userId}")(update_userId)

# from .endpoint.delete_localUserId import delete_localUserId
# router.delete("/local/{localUserId}")(delete_localUserId)

# from .endpoint.delete_userId import delete_userId
# router.delete("/{userId}")(delete_userId)

from .endpoint.get_list_registers import get_list_registers
router.put("")(get_list_registers)

# from .endpoint.get_localUserId import get_localUserId 
# router.get("/{localUserId}")(get_localUserId)

from .endpoint.search_user_by_face import search_user_by_face
router.put("/searchRelativeFace/")(search_user_by_face)

# from .endpoint.search_user_by_fhd_image import search_user_by_fhd_image
# router.put("/recognize/")(search_user_by_fhd_image)

# from .endpoint.matching import matching
# router.put("/matching/")(matching)

# from .endpoint.update_url import update_url
# router.put("/updateUrls/{userId}")(update_url)

from .endpoint.milvus_endpoint import search_face_by_vector,get_number_embedding,restore_milvus
router.put("/milvus/searching")(search_face_by_vector)
router.get("/milvus/")(get_number_embedding)
router.post("/milvus/restore")(restore_milvus)
