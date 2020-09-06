FROM ubuntu:18.04

RUN sed -i 's/archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list
RUN groupadd -g 1000 misc
RUN useradd -g 1000 -u 1000 -m misc
RUN apt-get update
RUN apt-get install -y xinetd gcc-multilib
RUN chmod 774 /tmp
RUN chmod -R 774 /var/tmp
RUN chmod -R 774 /dev
RUN chmod -R 774 /run
RUN chmod 1733 /tmp /var/tmp /dev/shm
COPY ./share/ /home/misc/
COPY ./xinetd /etc/xinetd.d/misc
RUN chown misc:misc /home/misc
RUN chmod 550 /home/misc
RUN chown misc:misc /home/misc/*
RUN chmod 550 /home/misc/run.sh
RUN chmod 440 /home/misc/flag.txt
RUN chmod 110 /home/misc/block # change challenge name

CMD ["/usr/sbin/xinetd","-dontfork"]
