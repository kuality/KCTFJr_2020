#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char buf[1000];
    int size = 0;
    memset(buf,sizeof(buf),0);
    setvbuf(stdout,0,2,0);
    printf("c@rZy myn0tE [%p]\n",buf);
    puts("Exploit me :)");
    printf("Size : ");
    scanf("%3d",&size);
    printf("Contents : ");
    read(0,buf,size);
    puts("Bye~~~~");
}
