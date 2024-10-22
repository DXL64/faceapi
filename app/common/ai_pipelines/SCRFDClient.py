import numpy as np

from .BaseClient import BaseClient

class SCRFDClient(BaseClient):
    def __init__(self, config) -> None:
        super().__init__(config)

    def nms(self, dets):
        thresh = self.nms_thresh
        x1 = dets[:, 0]
        y1 = dets[:, 1]
        x2 = dets[:, 2]
        y2 = dets[:, 3]
        scores = dets[:, 4]

        areas = (x2 - x1 + 1) * (y2 - y1 + 1)
        order = scores.argsort()[::-1]

        keep = []
        while order.size > 0:
            i = order[0]
            keep.append(i)
            xx1 = np.maximum(x1[i], x1[order[1:]])
            yy1 = np.maximum(y1[i], y1[order[1:]])
            xx2 = np.minimum(x2[i], x2[order[1:]])
            yy2 = np.minimum(y2[i], y2[order[1:]])

            w = np.maximum(0.0, xx2 - xx1 + 1)
            h = np.maximum(0.0, yy2 - yy1 + 1)
            inter = w * h
            ovr = inter / (areas[i] + areas[order[1:]] - inter)

            inds = np.where(ovr <= thresh)[0]
            order = order[inds + 1]

        return keep

    def postprocess_batch(self, raw_ouputs):
        results = []

        bboxes = []
        scores = []
        landmarks = []

        for b in range(len(raw_ouputs)):
            x = raw_ouputs[b]
            if len(x.shape) == 4:
                x = np.squeeze(x, axis=2)
            if x.shape[2] == 2:
                scores = np.expand_dims(x[:,:,1], axis=-1)
            elif x.shape[2] == 4:
                bboxes = x
            else:
                landmarks = x
        
        for batch in range(self.batch_size):
            pre_det = np.hstack((bboxes[batch], scores[batch], landmarks[batch])).astype(np.float32, copy=False)
            pre_det = pre_det[pre_det[:, 4] > self.conf_thresh]
            keep = self.nms(pre_det)

            res = []
            for k in keep:
                score = pre_det[k][4]
                class_id = 0
                box = pre_det[k][0:4]
                landmark = pre_det[k][5:16]

                res.append([box, score, class_id, landmark])
            results.append(res)

        return np.array(results, dtype=object)
