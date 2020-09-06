FROM ubuntu:18.04
ENV DEBIAN_FRONTEND=noninteractive 
ENV APACHE_RUN_USER www-data
ENV APACHE_RUN_GROUP www-data

RUN apt update
RUN apt install -y apache2
RUN apt -y install software-properties-common
RUN add-apt-repository ppa:ondrej/php
RUN apt update
RUN apt install -y php7.4

COPY ./web/ /var/www/html/
RUN chown -R www-data:www-data /var/www/
RUN rm /var/www/html/index.html

COPY ./start.sh /
RUN chmod 750 /start.sh

CMD ["apachectl", "-D", "FOREGROUND"]
