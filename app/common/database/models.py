from sqlalchemy import Column, ForeignKey, Integer, String, DateTime, BLOB, Boolean,LargeBinary
from sqlalchemy.orm import relationship

from .database import Base
from datetime import datetime

class Face(Base):
    __tablename__ = 'face'

    faceId = Column(Integer, primary_key=True, index=True)
    face_embedding = Column(LargeBinary)
    original_photo = Column(String)
    bbox_x = Column(Integer)
    bbox_y = Column(Integer)
    bbox_w = Column(Integer)
    bbox_h = Column(Integer)
    lastUpdate = Column(DateTime)

    def update(self, **kwarg):
        self.faceId = kwarg.get("faceId", None) if kwarg.get("faceId", None) != self.faceId else self.faceId
        self.bbox_x = kwarg.get("bbox_x", None) if kwarg.get("bbox_x", None) != self.bbox_x else self.bbox_x
        self.bbox_y = kwarg.get("bbox_y", None) if kwarg.get("bbox_y", None) != self.bbox_y else self.bbox_y
        self.bbox_w = kwarg.get("bbox_w", None) if kwarg.get("bbox_w", None) != self.bbox_w else self.bbox_w
        self.bbox_h = kwarg.get("bbox_h", None) if kwarg.get("bbox_h", None) != self.bbox_h else self.bbox_h
        self.original_photo = kwarg.get("original_photo", None) if kwarg.get("original_photo", None) != self.original_photo else self.original_photo
        self.lastUpdate = datetime.now()

    def to_dict(self):
        return {
            "faceId": self.faceId,
            "bbox": self.bbox,
            "imageUrl": self.original_photo,
            "vector": self.face_embedding,
            "lastUpdate": int(datetime.timestamp(self.lastUpdate) * 1e3),
        }
