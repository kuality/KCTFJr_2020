#!/bin/bash
sudo docker build -t imsorry .
sudo docker run -d -p [port]:[port] imsorry