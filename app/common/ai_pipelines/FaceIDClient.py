import numpy as np

from .BaseClient import BaseClient


class FaceIDClient(BaseClient):
    def postprocess_batch(self, raw_outputs):

        outputs = np.array(raw_outputs, dtype="float32")
        L2 = np.linalg.norm(outputs, axis=2)
        res = np.squeeze(outputs / np.expand_dims(L2, axis=2), axis=0)
        return res
