#!/bin/bash
sudo docker build -t babyonfire .
sudo docker run -d -p [port]:[port] babyonfire