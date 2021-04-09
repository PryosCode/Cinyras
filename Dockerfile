FROM debian:buster-slim

WORKDIR /build
RUN git clone https://github.com/PryosCode/Cinyras.git . && \
    gcc src/main.c -o cinyras

WORKDIR /cinyras
ENTRYPOINT [ "/build/cinyras" ]