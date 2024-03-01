import numpy as np

from configs.configs import Settings

__all__ = ["SCRFD_CONFIG", "FACEID_CONFIG", "FACE_ALIGN_CONFIG", "FACE_QUALITY_CONFIG"]
settings = Settings()

SCRFD_CONFIG = {
    "url": settings.TRITON_URL,
    "model_name": "scrfd_2.5g",
    "batch_size": 1,
    "verbose": False
}

FACE_ALIGN_CONFIG = {
    "image_size": (112, 112),
    "standard_landmarks": np.array([
        [38.2946, 51.6963],
        [73.5318, 51.5014],
        [56.0252, 71.7366],
        [41.5493, 92.3655],
        [70.7299, 92.2041]
    ], dtype=np.float32)
}

FACEID_CONFIG = {
    "url": settings.TRITON_URL,
    "model_name": "iresnet50",
    "batch_size": 1,
    "verbose": False
}

FACE_QUALITY_CONFIG = {
    "url": settings.TRITON_URL,
    "model_name": "face_quality",
    "batch_size": 1,
    "verbose": False
}
