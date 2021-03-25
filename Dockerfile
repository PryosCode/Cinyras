FROM rust:slim-buster

RUN apt-get update && \
    apt-get -y install git pkg-config libssl-dev

WORKDIR /cargo
RUN git clone https://github.com/PryosCode/Cinyras.git . && \
    cargo build --release

WORKDIR /cinyras
ENTRYPOINT [ "/cargo/target/release/cinyras" ]