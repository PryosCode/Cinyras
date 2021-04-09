FROM debian:buster-slim

WORKDIR /build
RUN git clone https://github.com/PryosCode/Cinyras.git . && \
    make

WORKDIR /cinyras
ENTRYPOINT [ "/build/cinyras" ]