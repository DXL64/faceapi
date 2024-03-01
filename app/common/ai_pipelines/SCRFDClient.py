import numpy as np

from .BaseClient import BaseClient


class SCRFDClient(BaseClient):
    def __init__(self, config) -> None:
        super().__init__(config)

    def postprocess_batch(self, raw_ouputs):
        results = []
        for b in range(len(raw_ouputs)):
            output = raw_ouputs[b]
            num_dets = output["num_detections"]
            boxes = output["bboxes"]
            scores = output["scores"]
            landmarks = output["landmarks"]
            res = []
            for i in range(num_dets):
                score = scores[i]
                class_id = 0
                box = boxes[i]
                box[2] = box[0] + box[2]
                box[3] = box[1] + box[3]
                landmark = landmarks[i]

                res.append([box, score, class_id, landmark])
            results.append(res)

        return np.array(results, dtype=object)
