iptables -I INPUT 1 -p tcp --dport 31337 -j ACCEPT
iptables -I INPUT 1 -p tcp --dport 31338 -j ACCEPT
iptables -I INPUT 1 -p tcp --dport 31339 -j ACCEPT
iptables -I INPUT 1 -p tcp --dport 31340 -j ACCEPT
iptables -I INPUT 1 -p tcp --dport 31341 -j ACCEPT
iptables -I INPUT 1 -p tcp --dport 31342 -j ACCEPT

docker run -it -p "31337:80" trick sh "/start.sh"
docker run -it -p "31338:3000" trigger sh "/start.sh"
docker run -it -p "31339:80" serial sh "/start.sh"
docker run -it -p "31340:80" robots sh "/start.sh"
docker run -it -p "31341:80" lfi sh "/start.sh"
docker run -it -p "31342:5000" first_rce sh "/start.sh"
