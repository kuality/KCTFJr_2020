#!/bin/bash
sudo docker build -t summer_party .
sudo docker run -d -p [port]:[port] summer_party