#include <stdio.h>
#include <stdlib.h>

int main(){
    char buf[100];
    setvbuf(stdout,0,2,0);
    write(1,"Exploit Me!\n",12);
    read(0,buf,0x100);
}
