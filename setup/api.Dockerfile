FROM ubuntu:20.04 as base
ENV TZ="Asia/Ho_Chi_Minh"

WORKDIR /opt/vinbigdata/service-api

COPY setup/conda_environment.yml /tmp/environment.yml

COPY setup/environment.yml \
    app/logging.conf \
    app/main.py \
    /opt/vinbigdata/service-api/

SHELL ["/bin/bash", "-c"]

ARG CONDA_DIR="/opt/conda"
ENV PATH=$CONDA_DIR/bin:$PATH
RUN apt-get update && apt-get install wget mysql-client gcc ffmpeg libsm6 libxext6 -y
RUN mkdir -p /tmp && wget https://repo.anaconda.com/miniconda/Miniconda3-py39_4.12.0-Linux-x86_64.sh -O /tmp/miniconda.sh
RUN bash /tmp/miniconda.sh -b -p $CONDA_DIR
RUN conda init
RUN conda config --set auto_activate_base false
RUN conda env create -f /tmp/environment.yml
RUN tar -czvf /tmp/vinfast111_env.tar.gz /opt/conda/envs/vinfast111

# FROM base as base_build
# COPY app /tmp/app/
# WORKDIR /tmp/app
# RUN  conda run --no-capture-output -n vinfast111 python setup_nuitka.py /tmp/app
# RUN  conda run --no-capture-output -n vinfast111 python setup_cython.py build_ext
# RUN  cp -r build/lib.linux-x86_64-cpython-39/shared/* shared/ && \
#     cd shared && tar -czvf ../shared.tar.gz *

# FROM base
# ENV PYTHONPATH=/opt/conda/envs/vinfast/lib/vbdi
# COPY --from=base_build \
#     /tmp/app/shared.tar.gz \
#     /tmp/
# RUN mkdir -p /opt/conda/envs/vinfast/lib/vbdi && \
#     tar -xzvf /tmp/shared.tar.gz -C /opt/conda/envs/vinfast/lib/vbdi
