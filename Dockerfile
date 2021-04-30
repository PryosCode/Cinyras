FROM debian:buster-slim
WORKDIR /build

RUN apt-get update && \
    apt install git && \
    git clone https://github.com/PryosCode/Cinyras.git . && \
    make

WORKDIR /cinyras
ENTRYPOINT [ "/build/cinyras" ]