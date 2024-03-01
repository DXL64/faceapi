from fastapi import Header, HTTPException

from configs.configs import Settings


async def get_token_header(x_token: str = Header()):
    if x_token != Settings().SECRET_TOKEN:
        raise HTTPException(status_code=400, detail="X-Token header invalid")
