import cv2
import numpy as np
from skimage import transform as trans


class FaceAlignment:
    def __init__(self, image_size=(112, 112), standard_landmarks=np.array([], dtype=np.float32)) -> None:
        self.image_size = image_size
        self.standard_landmarks = standard_landmarks
        self.similarity_transform = trans.SimilarityTransform()

    def __call__(self, image, bbox, landmarks) -> np.ndarray:
        self.similarity_transform.estimate(landmarks, self.standard_landmarks)
        transformation_matrix = self.similarity_transform.params[0:2, :]
        if transformation_matrix is None:
            if bbox is None:  # use center crop
                det = np.zeros(4, dtype=np.int32)
                det[0] = int(image.shape[1] * 0.0625)
                det[1] = int(image.shape[0] * 0.0625)
                det[2] = image.shape[1] - det[0]
                det[3] = image.shape[0] - det[1]
            else:
                det = bbox
            margin = 44
            bb = np.zeros(4, dtype=np.int32)
            bb[0] = np.maximum(det[0] - margin / 2, 0)
            bb[1] = np.maximum(det[1] - margin / 2, 0)
            bb[2] = np.minimum(det[2] + margin / 2, image.shape[1])
            bb[3] = np.minimum(det[3] + margin / 2, image.shape[0])
            ret = image[bb[1]: bb[3], bb[0]: bb[2], :]
            if len(self.image_size) > 0:
                ret = cv2.resize(ret, (self.image_size[0], self.image_size[1]))
            return ret
        else:
            aligned_image = cv2.warpAffine(image, transformation_matrix, (self.image_size[0], self.image_size[1]))
        return aligned_image
