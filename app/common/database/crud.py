from datetime import datetime

from sqlalchemy.orm import Session
from sqlalchemy import func

from . import models
from .models import Face


def get_face_by_id(db: Session, faceId: int):
    face = db.query(models.Face).get(faceId)
    if face:
        return face.to_dict()
    else:
        raise Exception("Face not found!")

def create_face(db: Session, **kwargs) -> models.Face:
    """
    Create new face
    :param db:
    :param dossier:
    :return:
    """
    data = {
        'faceId': kwargs.get('faceId'),
        'bbox_x': kwargs.get('bbox_x'),
        'bbox_y': kwargs.get('bbox_y'),
        'bbox_w': kwargs.get('bbox_w'),
        'bbox_h': kwargs.get('bbox_h'),
        'face_embedding': kwargs.get('face_embedding', None),
        'original_photo': kwargs.get('original_photo'),
        'lastUpdate': datetime.now()
    }
    face = Face(**data)
    db.add(face)
    db.flush()
    return face

def update_face(db: Session, faceId, **kwargs):
    """
    Update existed face
    :param db:
    :return:
    """
    face = db.query(models.Face).get(faceId)
    if face:
        face.update(**kwargs)
        db.flush()
    else:
        raise Exception(f'No row entry found with id: {faceId}')

    return face.to_dict()

def get_face_list(db: Session, filters=None):
    """
    get dossiers list with custom filters
    :param db:
    :param filters:
    :return:
    """
    results = []
    faces = db.query(models.Face).all()
    for face in faces:
        results.append(face.to_dict())

    return results

def delete_face_by_id(db: Session, id: int):
    effected_rows = db.query(models.Face).filter(models.Face.faceId == id).delete()
    return effected_rows
