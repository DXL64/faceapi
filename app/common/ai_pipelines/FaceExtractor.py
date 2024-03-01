from typing import List
import logging
import time

import cv2
import numpy as np

from .SCRFDClient import SCRFDClient
from .FaceIDClient import FaceIDClient
from .FaceAlign import FaceAlignment
# from .FaceQualityClient import FaceQualityClient
from .config import *
from routers.api_response_schemas import ResponseCode

from configs.configs import Settings

setting = Settings()
logger = logging.getLogger('FaceExtractor.py')

class FaceException(Exception):
    def __init__(self, message: str, path: str, code_response: str = None) -> None:
        super().__init__(message)
        self.message = message
        self.path = path
        self.code_response = code_response 

    def __str__(self):
        return self.message


class MultipleFaceException(Exception):
    def __init__(self, exceptions: List[FaceException]) -> None:
        # self.exceptions = exceptions
        self.paths = [e.path for e in exceptions]
        self.messages = [e.message for e in exceptions]
        self.code_responses = [e.code_response for e in exceptions] 
    
    def __str__(self) -> str:
        return "Face Invalid!"


class FaceExtractor:
    def __init__(self) -> None:
        self.face_detection = SCRFDClient(SCRFD_CONFIG)
        self.faceid = FaceIDClient(FACEID_CONFIG)
        self.face_align = FaceAlignment(**FACE_ALIGN_CONFIG)
        self.face_quality = None
        self.quality_labels = ["bad", "good", "facemask", "sunglasses"]

    def _preprocess(self, image_cv: np.ndarray) -> np.ndarray:
        img_h, img_w = image_cv.shape[:-1]

        im_ratio = float(img_w) / img_h

        face_detection_input_size = self.face_detection.get_input_shape()
        model_ratio = float(face_detection_input_size[2]) / face_detection_input_size[1]  # w/h
        if im_ratio > model_ratio:
            new_width = face_detection_input_size[2]
            new_height = int(new_width / im_ratio)
        else:
            new_height = face_detection_input_size[1]
            new_width = int(new_height * im_ratio)

        scale = img_h / new_height
        img_resized = cv2.resize(image_cv, (new_width, new_height))
        img_scaled = np.zeros(
            [face_detection_input_size[1], face_detection_input_size[2], face_detection_input_size[3]], dtype=np.uint8)
        img_scaled[:new_height, :new_width, :] = img_resized

        return img_scaled, scale

    def extract_feature_batch(self, batch_img_bytes: List[bytes], image_paths: List):
        exceptions = []
        batch_inputs = []
        batch_original_shape = []
        batch_cv2_imgs = []
        start = time.time()

        for img_byte in batch_img_bytes:
            cv2_img = cv2.imdecode(np.frombuffer(img_byte, dtype=np.uint8), flags=cv2.IMREAD_UNCHANGED)
            if cv2_img.shape[-1] == 4:
                cv2_img = cv2.cvtColor(cv2_img, cv2.COLOR_BGRA2BGR)
        
            batch_cv2_imgs.append(cv2_img)
            image_scaled, scale = self._preprocess(cv2_img)
            img_h, img_w = image_scaled.shape[:-1]
            batch_original_shape.append([img_h, img_w, scale])
            
            image_scaled = np.array(image_scaled, dtype="uint8")
            batch_inputs.append(image_scaled)

        batch_inputs = np.stack(batch_inputs, 0)
        preprocess_time = time.time()
        logger.info(f"preprocess: {preprocess_time - start}")
        faces = self.face_detection.infer_batch(batch_inputs)
        infer_time = time.time()
        logger.info(f"infer_face_detection_time: {infer_time - preprocess_time}")

        batch_aligned_face = []
        for face, cv2_img, ori_shape, path in zip(faces, batch_cv2_imgs, batch_original_shape, image_paths):
            try:
                if len(face) < 1:
                    raise FaceException(f"Number face in {path} should be 1 but got {len(face)}!", path)
                box = face[0][0]
                score = face[0][1]
                class_id = face[0][2]
                landmark = face[0][3]
                # logger.info(f"Number face in {path}: {len(face)}!")
                print(f"Number face in {path}: {len(face)}!")
                box, score, class_id, landmark = self.get_biggest_area_face(face)

                box = self.rescale_points(box, *ori_shape)
                if (box[2] - box[0] < 50 or box[3] - box[1] < 50):
                    raise FaceException(f"Face in {path} too small: {box[2] - box[0]} x {box[3] - box[1]}", path)

                landmark = self.rescale_points(np.array(landmark).ravel().tolist(), *ori_shape)
                landmark = np.array(landmark).reshape(5, 2)

                face_aligned = self.face_align(cv2_img, None, landmark)
                batch_aligned_face.append(face_aligned)

            except FaceException as e:
                exceptions.append(e)
        
        if len(exceptions) > 0:
            raise MultipleFaceException(exceptions)
        
        infer_faceid = time.time()
        run_faceid = True
        batch_aligned_tensors = np.stack(batch_aligned_face, 0)
        if self.face_quality is not None:
            qualities = self.face_quality.infer_batch(batch_aligned_tensors)
            quality_ids = np.argmax(qualities, 1) 
            face_embeddings = None
            if not np.all(quality_ids == 1):
                run_faceid = False
                for quality_id, path in zip(quality_ids.tolist(), image_paths):
                    try:
                        if quality_id == 0:
                            raise FaceException(f"Face in {path} not good", path)
                        elif quality_id == 2:
                            raise FaceException(f"Face in {path} wearing mask", path)
                        elif quality_id == 3:
                            raise FaceException(f"Face in {path} wearing sunglass", path)
                    except FaceException as e:
                        exceptions.append(e)

        if len(exceptions) > 0:
            raise MultipleFaceException(exceptions)

        if run_faceid:
            face_embeddings = self.faceid.infer_batch(batch_aligned_tensors)

        logger.info(f"infer_faceid_time: {time.time() - infer_faceid}")
        
        return face_embeddings, batch_aligned_face

    @staticmethod
    def rescale_points(points: list, original_height: int, original_width: int, scale: float = 1.0) -> list:
        return [point * original_height * scale if i % 2 == 1 else point * original_width * scale
                for i, point in enumerate(points)]

    @staticmethod
    def get_biggest_area_face(faces):
        biggest_area = 0
        biggest_bbox, biggest_key_point = None, None
        biggest_score, biggest_id = None, None
        for box, score, class_id, key_point in faces:
            xmin, ymin, xmax, ymax = box
            if (xmax-xmin) * (ymax-ymin) > biggest_area:
                biggest_area = (xmax-xmin) * (ymax-ymin)
                biggest_bbox = box.copy()
                biggest_key_point = key_point.copy()
                biggest_id = class_id
                biggest_score = score

        return biggest_bbox, biggest_score, biggest_id, biggest_key_point


if __name__ == "__main__":
    img_path = "/home/phatnv/phatnv-workspace/vinbdi/ds-workspace/DeepStream/data/test/face_analytics/1.jpg"

    extractor = FaceExtractor()
    # face_vector = extractor.extract_feature(img_path)
