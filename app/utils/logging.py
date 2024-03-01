import time
import os

LOGGING = {
    "version": 1,
    "disable_existing_loggers": False,
    "loggers": {
        "": {
            "handlers": ["console", "file"],
            "level": "INFO", "propagate": True
        }
    },
    "formatters": {
        "verbose": {
            "format": "{levelname} {asctime} {name} {funcName} L{lineno:d} {message}",
            "style": '{',
        },
        "simple": {
            "format": "{levelname} {message}",
            "style": '{',
        },
    },
    "handlers": {
        "console": {
            "level": "INFO",
            "class": "logging.StreamHandler",
            "formatter": "verbose",
            "stream": "ext://sys.stdout"
        },
        'detailedConsoleHandler': {
            "level": "INFO",
            "class": "logging.StreamHandler",
            "formatter": 'verbose',
        },
        'file': {
            "level": "INFO",
            "class": "logging.handlers.TimedRotatingFileHandler",
            "filename": "/opt/vinbigdata/service-api/logs/vinfast_face_api.log",
            "when": 'D', # this specifies the interval 
            "backupCount": 10, # how many backup file to keep, 10 days 
            "formatter": "verbose"
        }
    }
}


class AverageMeter:
    def __init__(self):
        self.reset()

    def reset(self):
        self.__min = 1e9
        self.__max = 0
        self.__avg = 0
        self.__sum = 0
        self.__cnt = 0

    def update(self, duration):
        self.__sum += duration
        self.__cnt += 1
        self.__avg = self.__sum / self.__cnt
        self.__max = max(self.__max, duration)
        self.__min = min(self.__min, duration)

    @property
    def __dict__(self) -> dict:
        return {
            "min": self.__min,
            "max": self.__max,
            "avg": self.__avg,
        }


class TimingLog:
    def __init__(self) -> None:
        self.complete_time = AverageMeter()
        self.search_milvus = AverageMeter()
        self.search_sql = AverageMeter()

    @property
    def __dict__(self) -> dict:
       return {
            "complete_time": vars(self.complete_time),
            "search_milvus": vars(self.search_milvus),
            "search_sql": vars(self.search_sql)
       }


if __name__ == "__main__":
    timing = TimingLog()
    timing.complete_time.update()
    timing.search_milvus.update()
    timing.search_sql.update()
    print(vars(timing))