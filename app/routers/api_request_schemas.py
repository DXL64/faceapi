from typing import Optional
from pydantic import BaseModel
from utils.utils import *
import numpy as np
from configs.configs import Settings 

settings = Settings()
class BadField(Exception):
    def __init__(self, message: str) -> None:
        super().__init__(message)
        self.message = message

    def __str__(self):
        return self.message


class MultipleBadField(Exception):
    def __init__(self, exceptions: list[BadField]) -> None:
        self.messages = [e.message for e in exceptions]
    
    def __str__(self) -> str:
        return "Invalid Request!"
class BaseRequest(BaseModel):
    # request_id: str
    pass


class UploadRequest(BaseRequest):
    imageUrls: list[str]

    def precheck(self):
        list_exceptions = []
        if self.imageUrls is None or len(self.imageUrls) == 0 :
            list_exceptions.append(BadField(f"imageUrls is invalid"))
        if len(self.imageUrls) > settings.ENROLL_IMAGES_LIMIT : 
            list_exceptions.append(BadField(f"imageUrls is invalid! The maximum number of images that can be registered is {settings.ENROLL_IMAGES_LIMIT}"))
        check_duplicate = check_duplicate_urls(self.imageUrls)

        if len(check_duplicate) > 0 : 
            list_exceptions.append(BadField(check_duplicate))

        if len(list_exceptions) > 0:
            raise MultipleBadField(list_exceptions)


class UpdateRequest(BaseRequest):
    faceId: Optional[str]
    credential: Optional[str]
    name: Optional[str]
    description: Optional[str]
    department: Optional[str]
    type: Optional[str]
    expired: Optional[int]
    isForceUpdate: Optional[bool]

    ## required by QC 
    def precheck(self, ignoreForceUpdate=False):
        list_exceptions = []

        if self.userId is None: 
            list_exceptions.append(BadField(f"userId is required!"))
        else :
            self.userId = self.userId.strip()
            if len(self.userId) == 0:
                list_exceptions.append(BadField(f"userId is required!"))
            elif len(self.userId) > 128:
                list_exceptions.append(BadField(f"length of userId is invalid!"))


        if self.credential is not None:
            self.credential = self.credential.strip()
            if len(self.credential) == 0:
                self.credential = None
            elif len(self.credential) > 12:
                list_exceptions.append(BadField(f"length of credential is invalid!"))


        if self.type is not None:
            if len(self.type) > 15: 
                list_exceptions.append(BadField(f"length of type is invalid!"))
            elif len(self.type) == 0: 
                self.type = None


        if self.name is not None: 
            self.name = self.name.strip()
            if len(self.name) > 255:
                list_exceptions.append(BadField(f"length of name is invalid!"))
            elif len(self.name) == 0: 
                self.name = None

        
        if self.description is not None:
            self.description = self.description.strip()
            if len(self.description) > 255:
                list_exceptions.append(BadField(f"length of description is invalid!"))
            elif len(self.description) == 0:
                self.description = None
        
        if self.department is not None:
            self.department = self.department.strip()
            if len(self.department) > 255:
                list_exceptions.append(BadField(f"length of department is invalid!"))
            elif len(self.department) == 0:
                self.department = None

        if not ignoreForceUpdate:
            if self.isForceUpdate is None:
                list_exceptions.append(BadField(f"isForceUpdate is required!"))

        if self.expired is None:
            self.expired = 1

        if len(list_exceptions) > 0:
            raise MultipleBadField(list_exceptions)
        
class UpdateRequestImageUrls(BaseRequest):
    userId: Optional[str]
    imageUrls: list[str]

    ## required by QC 
    def precheck(self):
        list_exceptions = []
        if self.imageUrls is None or len(self.imageUrls) == 0 :
              list_exceptions.append(BadField(f"imageUrls is invalid"))

        if len(self.imageUrls) > settings.ENROLL_IMAGES_LIMIT : 
              list_exceptions.append(BadField(f"imageUrls is invalid! The maximum number of images that can be registered is {settings.ENROLL_IMAGES_LIMIT}"))
 
        check_duplicate = check_duplicate_urls(self.imageUrls)

        if len(check_duplicate) > 0 : 
            list_exceptions.append(BadField(check_duplicate))

        if self.userId is None: 
            list_exceptions.append(BadField(f"userId is required!"))
        else :
            self.userId = self.userId.strip()
            if len(self.userId) == 0:
                list_exceptions.append(BadField(f"userId is required!"))
            elif len(self.userId) > 128:
                list_exceptions.append(BadField(f"length of userId is invalid!"))

        if len(list_exceptions) > 0:
            raise MultipleBadField(list_exceptions)


class ListRegisterRequest(BaseRequest):
    lastTimeRequest: int


class SearchFaceRequest(BaseRequest):
    imageUrl: str
    numberRecords: int
    rois: Optional[list[float]]

class SearchFaceFHDRequest(BaseRequest):
    imageUrl: str
    rois: Optional[list[list[float]]]

    def precheck(self):
        print(self.rois)
        if not self.rois:
            return
        list_exceptions = []
        for index,roi in enumerate(self.rois):
            if not assert_point(roi):
                list_exceptions.append(BadField(f"roi index {index} : {roi} invalid"))

        if len(list_exceptions) > 0:
            raise MultipleBadField(list_exceptions)



class CompareFaceRequest(BaseRequest):
    imageUrls: list[str]


class VectorFaceRequest(BaseRequest):
    vector: str
