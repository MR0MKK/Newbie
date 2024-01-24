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
COPY AnGiDay.c /app/main.c
COPY flag.txt /app/flag.txt
COPY libc.so.6 /app/libc.so.6

WORKDIR /app

RUN gcc main.c -o main
RUN rm main.c

EXPOSE 2500

ENTRYPOINT ["./start_nc.sh"]