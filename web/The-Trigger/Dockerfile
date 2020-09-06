FROM ubuntu:18.04

RUN mkdir -p /app
WORKDIR /app
ADD ./web/* ./

RUN apt-get update
RUN apt-get install -y curl
RUN curl -sL https://deb.nodesource.com/setup_12.x | bash -
RUN apt-get install -y nodejs
RUN apt-get install -y build-essential

RUN npm install
COPY ./env/flag /flag

COPY ./start.sh /
RUN chmod 750 /start.sh

CMD ["node","/app/app.js"]
