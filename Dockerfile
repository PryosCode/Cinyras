FROM rust:slim-buster
WORKDIR /cinyras

RUN apt-get update
RUN apt-get -y install git
RUN apt-get -y install pkg-config
RUN apt-get -y install libssl-dev

RUN git clone https://github.com/PryosCode/Cinyras.git .
RUN cargo build --release

ENTRYPOINT [ "target/release/cinyras" ]