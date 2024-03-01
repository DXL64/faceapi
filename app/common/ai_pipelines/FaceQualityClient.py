import numpy as np

from .BaseClient import BaseClient


class FaceQualityClient(BaseClient):
    def __init__(self, config) -> None:
        super().__init__(config)

    def postprocess(self, raw_output_tensors):
        return raw_output_tensors[0][0]
    
    def postprocess_batch(self, raw_output_tensors):
        return raw_output_tensors[0]
