import uuid

class BaseResponse:
    request_id: str
    code: int
    message: str
    data: any

    def __init__(self):
        self.request_id = uuid.uuid4()


class UrlResponse(BaseResponse):
    def __init__(self):
        super(UrlResponse, self).__init__()

class UploadResponse(BaseResponse):
    def __init__(self):
        super(UploadResponse, self).__init__()


class SearchFaceResponse(BaseResponse):
    def __init__(self):
        super(SearchFaceResponse, self).__init__()
        # self.urlImage = ""
        # self.pic_id = ""
        self.result_pic_url = ""


class ResponseCode:
    
    SUCCESSFUL = 200
    FACE_CREATED_SUCCESS = 201
    BAD_REQUEST = 400
    UPLOAD_EVENT_ERROR = 401
    UPLOAD_EVENT_TIMEOUT = 402
    FACE_ALREADY_EXISTED = 4000101
    FACE_REGISTER_NOT_EXISTED = 4000103
    USER_NOT_EXISTED = 4000104
    INVALID_REQUEST_TIME = 4000105

    USER_NOT_FOUND = 4000106
    NO_FACE_DETECTED = 4000107
    SMALL_FACE_IMAGE = 4000108
    LOW_FACE_CONFIDENCE = 4000109
    INVALID_FACE_QUALITY = 4000110

    INVALID_FACE_BLURRINESS = 4000113
    INVALID_FACE_BRIGHTSNESS = 4000114
    INVALID_FACE_ANGLE = 4000115

    FACE_WITH_MASK = 4000111
    FACE_WITH_GLASSES = 4000112
    REG_IMAGE_IS_NOT_THE_SAME = 4000117
        
    USERID_ALREADY_EXISTED = 4100106
    CREDENTIAL_ALREADY_EXISTED = 4100107
    INTERNAL_SERVER_ERROR = 500
    MILVUS_CONNECTION_ERROR = 501


def ResponseMessage(responseCode: int) -> str:
    return {
        ResponseCode.SUCCESSFUL: "Successfully!",
        ResponseCode.FACE_CREATED_SUCCESS: "Face registered successfully!",
        ResponseCode.BAD_REQUEST: "Bad request!",
        ResponseCode.UPLOAD_EVENT_ERROR: "Upload event error!",
        ResponseCode.UPLOAD_EVENT_TIMEOUT: "Upload event timeout!",
        ResponseCode.FACE_ALREADY_EXISTED: "Face already existed!",
        ResponseCode.FACE_REGISTER_NOT_EXISTED: "Face register not existed!",
        ResponseCode.INVALID_REQUEST_TIME: "Invalid request time!",
        ResponseCode.USER_NOT_EXISTED: "User not existed!",
        ResponseCode.USERID_ALREADY_EXISTED: "userId already existed!",
        ResponseCode.CREDENTIAL_ALREADY_EXISTED: "Credential already existed!",
        ResponseCode.INTERNAL_SERVER_ERROR: "Internal server error!",
        ResponseCode.USER_NOT_FOUND: "User not found!",
        ResponseCode.NO_FACE_DETECTED: "Image does not have a face!",
        ResponseCode.SMALL_FACE_IMAGE: " Face image is too small!",
        ResponseCode.LOW_FACE_CONFIDENCE: "Confidence score of the face image is too low!",
        ResponseCode.INVALID_FACE_QUALITY: "Invalid face image quality!",
        ResponseCode.INVALID_FACE_BLURRINESS: "Invalid blurriness!",
        ResponseCode.INVALID_FACE_BRIGHTSNESS: "Invalid brightness",
        ResponseCode.INVALID_FACE_ANGLE: "Invalid face angle",
        ResponseCode.FACE_WITH_MASK: "Face image wearing a mask!",
        ResponseCode.FACE_WITH_GLASSES: "Face image wearing glasses!",
        ResponseCode.REG_IMAGE_IS_NOT_THE_SAME: "The registered image is not the same!"

    }.get(responseCode, None)


class UrlException(Exception):
    def __init__(self, message: str, path: str) -> None:
        super().__init__(message)
        self.message = message
        self.path = path

    def __str__(self):
        return self.message
    

class TheSamePersonException(Exception):
    def __init__(self, message: str) -> None:
        super().__init__(message)
        self.message = message

    def __str__(self):
        return self.message


class MultipleUrlExceptions(Exception):
    def __init__(self, exceptions: list[Exception]) -> None:
        # self.exceptions = exceptions
        self.paths = [e.path for e in exceptions]
        self.messages = [e.message for e in exceptions]
    
    def __str__(self) -> str:
        return "Invalid Request!"


class UserNotExist(Exception):
    def __init__(self, message: str) -> None:
        super().__init__(message)
        self.message = message
    
    def __str__(self) -> str:
        return self.message
