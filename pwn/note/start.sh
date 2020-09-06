#!/bin/bash
sudo docker build -t note .
sudo docker run -d -p [port]:[port] note
