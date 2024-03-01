import requests
from datetime import datetime

from configs.configs import Settings
from routers.api_response_schemas import UrlException, MultipleUrlExceptions


settings = Settings()


class TokenUpload:
    def __init__(self):
        self.token = None
        self.last_update = None
        self.url_get_token = settings.API_GET_UPLOAD_TOKEN
        self.headers = {
            "Content-Type": "application/x-www-form-urlencoded"
        }
        self.data = {
            "grant_type": "client_credentials",
            'client_id': settings.CLIENT_ID_AUTHEN,
            'client_secret': settings.CLIENT_SECRET_AUTHEN
        }

    def get_token(self):
        try:
            if self.last_update is None or (datetime.now().timestamp() - self.last_update > 1800):
                response = requests.post(self.url_get_token, headers=self.headers, data=self.data)
                self.token = response.json().get("access_token", None)
                self.last_update = datetime.now().timestamp()

            return self.token
        except:
            return None


token = TokenUpload()

def upload_by_vhm_api(filename, img_encode):
    url_upload = settings.API_UPLOAD_EVENT
    new_token = token.get_token()
    print(new_token)
    if new_token is None:
        raise UrlException(f"Can't get token to upload event!", settings.API_GET_UPLOAD_TOKEN)

    time_str = datetime.now().strftime("%Y%m%d")

    try:
        params = {
            'isPublic': 'true',
            'path': f'face-search/{time_str}',
            'services': 'CAMAI'
        }
        headers = {
            'Authorization': f'Bearer {new_token}',
            'accept': '*/*', 
        }

        files = {
            'file': (filename, img_encode, 'image/jpeg')
        }
        print("filename: ", filename)
        # print(files) 
        response = requests.post(url_upload, data=params, headers=headers, files=files)
        return response.json()
    except:
        raise UrlException(f"Can't upload event image!", url_upload)
    # print(response.json())
    