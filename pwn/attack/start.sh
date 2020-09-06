#!/bin/bash
sudo docker build -t attack .
sudo docker run -d -p [port]:[port] attack
