import string
from typing import Any
import requests
import json
import traceback

import cv2
import numpy as np


class BaseClient:
    def __init__(self, config) -> None:
        self.url = config["url"]
        self.__model_name = config["model_name"]
        self.__batch_size = config["batch_size"]
        self.load_metadata()
        self.headers = {
            'Content-Type': 'application/json'
        }
    
    def load_metadata(self) -> Any:
        modelmeta_enpoint = f"http://{self.url}/info/{self.__model_name}"
        try:
            metadata_res = requests.get(modelmeta_enpoint)
            metadata_res = metadata_res.json()
            if metadata_res.get("active", False):
                input_meta = metadata_res.get("input", 0)
                if input_meta:
                    width = input_meta["width"]
                    height = input_meta["height"]
                    channel = input_meta["channel"]
                    self._input_shape = [0, height, width, channel]
            else:
                raise Exception("Model not found!")

        except Exception as e:
            traceback.print_exc()
    
    def infer_batch(self, inputs) -> Any:
        infer_url = f"http://{self.url}/infer"
        try:
            payload = json.dumps({
                "model_name": self.__model_name,
                "data": inputs.ravel().astype("uint8").tolist(),
                "data_type": "uint8",
                "shape": inputs.shape
            })
            response = requests.post(infer_url, headers=self.headers, data=payload)
            response.raise_for_status()  # Raise an exception for any HTTP error status codes
            preds = response.json()["outputs"]
            preds = self.postprocess_batch(preds)
            return preds
        except Exception as e:
            traceback.print_exc()

    def preprocess_batch():
        pass

    def postprocess_batch(self, *args):
        raise NotImplementedError()
    
    def get_input_shape(self):
        return self._input_shape
