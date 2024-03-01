FROM ubuntu:18.04 as base

# Working directory
WORKDIR /opt/vinbigdata/service-api

# Copy env file to docker
COPY /conda_env.yml /tmp/environment.yml

# Install miniconda and create environment faceapi from env file
SHELL ["/bin/bash", "-c"]

ARG CONDA_DIR="/opt/conda"
ENV PATH=$CONDA_DIR/bin:$PATH
RUN  apt-get update \
        && apt-get install wget gcc -y
RUN mkdir -p /tmp && wget https://repo.anaconda.com/miniconda/Miniconda3-py39_4.12.0-Linux-x86_64.sh -O /tmp/miniconda.sh
RUN /bin/bash /tmp/miniconda.sh -b -p $CONDA_DIR &&\
    rm /tmp/miniconda.sh
RUN conda init
RUN conda config --set auto_activate_base false
RUN conda env create -f /tmp/	.yml

# Copy app to docker
COPY /app/ /opt/vinbigdata/service-api/app

ENV CONFIG="app/config.json"

# Make RUN commands use the new environment:
SHELL ["conda", "run", "-n", "faceapi", "/bin/bash", "-c"]

# ENTRYPOINT ["/bin/bash", "-l", "-c"]
ENTRYPOINT ["conda", "run", "--no-capture-output", "-n", "faceapi", "python", "app/main.py"]

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
