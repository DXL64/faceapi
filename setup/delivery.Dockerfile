FROM face-api:v1.0 as base

ENV CONDA_ENV=/opt/conda/envs/vinfast111

# COPY setup/vinfast111_env.tar.gz \
#     /tmp/
# RUN tar -xzvf /tmp/vinfast111_env.tar.gz -C /

ENV PYTHONPATH=${CONDA_ENV}/lib/vbdi
COPY setup/service_api_shared.tar.gz \
    /tmp/
RUN mkdir -p ${CONDA_ENV}/lib/vbdi && \
    tar -xzvf /tmp/service_api_shared.tar.gz -C ${CONDA_ENV}/lib/vbdi
