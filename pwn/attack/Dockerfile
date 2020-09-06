FROM ubuntu:18.04

RUN sed -i 's/archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list
RUN groupadd -g 1000 pwn
RUN useradd -g 1000 -u 1000 -m pwn
RUN apt-get update
RUN apt-get install -y xinetd gcc-multilib
RUN chmod 774 /tmp
RUN chmod -R 774 /var/tmp
RUN chmod -R 774 /dev
RUN chmod -R 774 /run
RUN chmod 1733 /tmp /var/tmp /dev/shm
COPY ./share/ /home/pwn/
COPY ./xinetd /etc/xinetd.d/pwn
RUN chown pwn:pwn /home/pwn
RUN chmod 550 /home/pwn
RUN chown pwn:pwn /home/pwn/*
RUN chmod 550 /home/pwn/run.sh
RUN chmod 440 /home/pwn/flag
RUN chmod 110 /home/pwn/attack # change challenge name

CMD ["/usr/sbin/xinetd","-dontfork"]
