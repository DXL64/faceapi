FROM ubuntu:20.04 as base
ENV TZ="Asia/Ho_Chi_Minh"

WORKDIR /opt/faceapi/service-api

COPY conda_env.yml /tmp/environment.yml

VOLUME ./app/ /opt/faceapi/service-api/

SHELL ["/bin/bash", "-c"]

ARG CONDA_DIR="/opt/conda"
ENV PATH=$CONDA_DIR/bin:$PATH
RUN apt-get update && apt-get install wget mysql-client gcc ffmpeg libsm6 libxext6 -y
RUN mkdir -p /tmp && wget https://repo.anaconda.com/miniconda/Miniconda3-py39_4.12.0-Linux-x86_64.sh -O /tmp/miniconda.sh
RUN bash /tmp/miniconda.sh -b -p $CONDA_DIR
RUN conda init
RUN conda config --set auto_activate_base false
RUN conda env create -f /tmp/environment.yml

ENV NVIDIA_VISIBLE_DEVICES all
ENV NVIDIA_DRIVER_CAPABILITIES compute,utility

# Copy app to docker
# COPY /app/ /opt/vinbigdata/service-api/app

# ENV CONFIG="app/config.json"

# Make RUN commands use the new environment:
# SHELL ["conda", "run", "-n", "faceapi", "/bin/bash", "-c"]

# ENTRYPOINT ["/bin/bash", "-l", "-c"]
# ENTRYPOINT ["conda", "run", "--no-capture-output", "-n", "faceapi", "python", "app/main.py"]
