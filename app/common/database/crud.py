from datetime import datetime

from sqlalchemy.orm import Session
from sqlalchemy import func

from . import models
from .models import Dossier, FaceId


def get_dossier_by_id(db: Session, localUserId: int):
    dossier = db.query(models.Dossier).get(localUserId)
    if dossier:
        return dossier.to_dict()
    else:
        raise Exception("User not found!")


def get_dossier_by_userId (db: Session, userId: str):
    dossier = db.query(models.Dossier).filter(models.Dossier.userId == userId).first()
    if dossier:
        return dossier.to_dict()
    else:
        raise Exception("User not found!")


def get_all_dossier_by_userId(db: Session, userId: str):
    dossier = db.query(models.Dossier).filter(models.Dossier.userId == userId).all()
    if dossier:
        return dossier
    else:
        return []


def get_all_dossier_by_credential(db: Session, credential: str):
    dossier = db.query(models.Dossier).filter(models.Dossier.credential == credential).all()
    if dossier:
        return dossier
    else:
        return []


def get_face_by_id(db: Session, face_id: int):
    return db.query(models.FaceId).get(face_id)


def get_face_by_localUserId(db: Session, localUserId: int):
    return db.query(models.FaceId).filter(models.FaceId.localUserId == localUserId).all()


def create_face(db: Session, **kwargs) -> models.FaceId:
    """
    Create new face
    :param db:
    :param dossier:
    :return:
    """
    data = {
        'localUserId': kwargs.get('localUserId'),
        'normalized_photo': kwargs.get('normalized_photo'),
        'original_photo': kwargs.get('original_photo'),
        'lastUpdate': datetime.now(),
        'face_embedding': kwargs.get('face_embedding', None)
    }
    face = FaceId(**data)
    db.add(face)
    db.flush()
    return face


def create_dossier(db: Session, **kwargs) -> models.Dossier:
    """
    Create new dossier
    :param db: Session
    :param dossier: Dossier
    :return: Dosser
    """
    data = {
        'userId': kwargs.get('userId', None),
        'credential': kwargs.get('credential', None),
        'name': kwargs.get('name'),
        'description': kwargs.get('description', None),
        'department': kwargs.get('department', None),
        'type': kwargs.get('type'),
        'expired': datetime.fromtimestamp(kwargs.get('expired', datetime.timestamp(datetime.now()) * 1e3) / 1e3),
        'lastUpdate': datetime.now(),
        'isForceUpdate': kwargs.get('isForceUpdate')
    }
    dossier = Dossier(**data)
    db.add(dossier)
    db.flush()
    return dossier


def update_dossier(db: Session, localUserId, **kwargs):
    """
    Update existed dossier
    :param db:
    :return:
    """
    dossier = db.query(models.Dossier).get(localUserId)
    if dossier:
        dossier.update(**kwargs)
        db.flush()
    else:
        raise Exception(f'No row entry found with id: {localUserId}')

    return dossier.to_dict()

def update_dossier_by_userId(db: Session, **kwargs):
    """
    Update existed dossier
    :param db:
    :return:
    """
    dossier = db.query(models.Dossier).filter(models.Dossier.userId == kwargs["userId"]).first()
    if dossier:
        dossier.update(**kwargs)
        db.flush()
    else:
        raise Exception(f'Not found user with userId: {kwargs["userId"]}')

    return dossier.to_dict()


def get_dossier_list(db: Session, filters=None):
    """
    get dossiers list with custom filters
    :param db:
    :param filters:
    :return:
    """
    results = []
    dossiers = db.query(models.Dossier).all()
    for dossier in dossiers:
        results.append(dossier.to_dict())

    return results


def get_dossier_list_with_last_update_time(db: Session, lastTimeRequest):
    """
    get dossiers list with custom filters
    :param db:
    :param filters:
    :return:
    """
    results = []
    lastTimeRequest_datetime = datetime.fromtimestamp(lastTimeRequest*1e-3)
    dossiers = db.query(models.Dossier).filter(models.Dossier.lastUpdate > lastTimeRequest_datetime).all()
    for dossier in dossiers:
        results.append(dossier.to_dict())

    return results

def delete_dossier_by_id(db: Session, localUserId: int):
    effected_rows = db.query(models.Dossier).filter(models.Dossier.localUserId == localUserId).delete()
    return effected_rows


def delete_face_by_id(db: Session, id: int):
    effected_rows = db.query(models.FaceId).filter(models.FaceId.id == id).delete()
    return effected_rows
