#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>
//flag : mKkPlLpXqRpPaCgM
void sigint_handler(int signal){
    puts("Time's up. bye...");
    exit(signal);
}

int init(){
    signal(SIGALRM,sigint_handler);
    alarm(180);
    return 0;
}
void printf_flag(){
     char flag[16];
     char temp;
     int i = 0;
     memset(flag,sizeof(flag),0);
     for(i = 0; i < 16; i++){
           flag[i] = 0x41 + (i*i)%5;
           if(i%2)
	       flag[i] += i;
	   else
	       flag[i] += i+0x20;
     }
     for(i=0; i< 8; i++){
           if(flag[i]%2){
		temp = flag[i];
		flag[i] = flag[i+8];
		flag[i+8] = temp;
	   }
           else
		flag[i] += (flag[i] & 0xF);
     }
     for(i = 0; i < 4; i++){
           if(flag[i+8]%3){
                temp = flag[i+8];
                flag[i+8] = flag[i+12];
                flag[i+12] = temp;
           }
           else
                flag[i+8] += (flag[i+8] & 0xF);
     }
     printf("flag : %s\n",flag);
}
int main(){
     init();
     puts("wait...");
     sleep(1000000);
     printf_flag();
}
