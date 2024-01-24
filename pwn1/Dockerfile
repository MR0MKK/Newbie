FROM ubuntu:latest

RUN apt-get update \
    && apt-get install -y \
    unzip \
    grep \
    gdb \
    build-essential \
    ncat \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir /apps
COPY start_nc.sh /app/start_nc.sh
COPY flag.txt /app/flag.txt
COPY pwn1 /app/pwn1

WORKDIR /app

RUN gcc main.c -o main
RUN rm main.c

EXPOSE 2502

ENTRYPOINT ["./start_nc.sh"]