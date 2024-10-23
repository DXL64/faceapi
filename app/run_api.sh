conda activate faceapi
uvicorn main:app --host 0.0.0.0 --workers 1 --port 30000