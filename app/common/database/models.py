from sqlalchemy import Column, ForeignKey, Integer, String, DateTime, BLOB, Boolean,LargeBinary
from sqlalchemy.orm import relationship

from .database import Base
from datetime import datetime


class Dossier(Base):
    __tablename__ = 'dossier'
    localUserId = Column(Integer, primary_key=True, index=True)
    userId = Column(String)
    credential = Column(String)
    name = Column(String)
    description = Column(String)
    department = Column(String)
    type = Column(String)
    expired = Column(DateTime)
    lastUpdate = Column(DateTime)
    _isForceUpdate = Column('isForceUpdate',Integer)
    faces = relationship("FaceId", back_populates="dossier")

    @property
    def isForceUpdate(self):
        return bool(self._isForceUpdate)

    @isForceUpdate.setter
    def isForceUpdate(self, value):
        self._isForceUpdate = int(value)

    def update(self, **kwarg):
        self.userId = kwarg.get("userId", None) if kwarg.get("userId", None) != self.userId else self.userId
        self.credential = kwarg.get("credential", None) if kwarg.get("credential") != self.credential else self.credential
        self.name = kwarg.get("name") if kwarg.get("name") != self.name else self.name
        self.description = kwarg.get("description", None) \
                if kwarg.get("description", None) != self.description else self.description
        self.department = kwarg.get("department", None) \
                if kwarg.get("department", None) != self.department else self.department
        self.type = kwarg.get("type") if kwarg.get("type") != self.type else self.type
        self.expired = datetime.fromtimestamp(kwarg.get("expired") / 1e3) if kwarg.get("expired") else self.expired
        self.isForceUpdate = int(kwarg.get("isForceUpdate", self.isForceUpdate))
        self.lastUpdate = datetime.now()

    def to_dict(self):
        return {
            "localUserId": self.localUserId,
            "userId": self.userId,
            "credential": self.credential,
            "name": self.name,
            "description": self.description,
            "department": self.department,
            "type": self.type,
            "imageUrls": [face.original_photo for face in self.faces],
            "vectors": [face.face_embedding for face in self.faces],
            "expired": int(datetime.timestamp(self.expired) * 1e3),
            "lastUpdate": int(datetime.timestamp(self.lastUpdate) * 1e3),
            "isForceUpdate": bool(self.isForceUpdate)
        }


class FaceId(Base):
    __tablename__ = 'faceid'

    id = Column(Integer, primary_key=True, index=True)
    face_embedding = Column(LargeBinary)
    original_photo = Column(String)
    normalized_photo = Column(String)
    # localUserId = Column(Integer, ForeignKey("dossier.localUserId"))
    localUserId = Column(Integer, ForeignKey(Dossier.localUserId))
    lastUpdate = Column(DateTime)
    dossier = relationship("Dossier", back_populates="faces")
