FROM ubuntu:18.04

RUN apt update
RUN apt install -y python python-pip
RUN pip install flask

RUN mkdir /app
COPY ./web/* /app/
COPY ./env/flag /

COPY ./env/start.sh /
RUN chmod 750 /start.sh

CMD ["/start.sh"]
