import numpy as np

from .BaseClient import BaseClient


class FaceIDClient(BaseClient):
    def postprocess_batch(self, raw_ouputs):
        outputs = []
        for output in raw_ouputs:
            outputs.append(output['feature'])
        
        outputs = np.array(outputs, dtype="float32")
        L2 = np.linalg.norm(outputs, axis=1)
        return outputs / np.expand_dims(L2, axis=1)
