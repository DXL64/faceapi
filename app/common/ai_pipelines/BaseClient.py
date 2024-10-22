import string
from typing import Any
import requests
import json
import traceback

import cv2
import numpy as np

import onnxruntime

DEFAULT = 112

class BaseClient:
    def __init__(self, config) -> None:
        self.__model_name = config["model_name"]
        self.__model_path = config["model_path"]
        if "scrfd" in config["model_name"]:
            self.nms_thresh = config["nms_thresh"]
            self.conf_thresh = config["conf_thresh"]
        self.load_model()
        self.headers = {
            'Content-Type': 'application/json'
        }
    
    def load_model(self) -> Any:
        try:
            providers = ['CUDAExecutionProvider', 'CPUExecutionProvider']
            self.session = onnxruntime.InferenceSession(self.__model_path, providers=providers)

            if self.session:
                self._output_name = []
                input_meta = self.session.get_inputs()[0]
                output_meta = self.session.get_outputs()
                self._input_name = input_meta.name
                for output in output_meta:
                    self._output_name.append(output.name)
                width = input_meta.shape[2]
                height = input_meta.shape[3]
                channel = input_meta.shape[1]
                self._input_shape = [0, int(height), int(width), int(channel)]
            else:
                raise Exception("Model not found!")

        except Exception as e:
            traceback.print_exc()
    
    def infer_batch(self, inputs) -> Any:
        self.batch_size = inputs.shape[0]
        try:
            outputs = self.session.run(self._output_name, {self._input_name: inputs})
            preds = self.postprocess_batch(outputs)
            return preds
        except Exception as e:
            traceback.print_exc()

    def preprocess_batch():
        pass

    def postprocess_batch(self, *args):
        raise NotImplementedError()
    
    def get_input_shape(self):
        return self._input_shape
