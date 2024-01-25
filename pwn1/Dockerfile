FROM ubuntu:22.04

RUN apt-get update \
    && apt-get install -y \
    unzip \
    gdb \
    build-essential \
    ncat \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir /app
COPY start_nc.sh /app/start_nc.sh
COPY flag.txt /app/flag.txt
COPY pwn1 /app/pwn1

WORKDIR /app

EXPOSE 2502

ENTRYPOINT ["./start_nc.sh"]