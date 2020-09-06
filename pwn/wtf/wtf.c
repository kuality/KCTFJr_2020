#include <stdio.h>
#include <string.h>
void syscall(){
    asm("syscall;ret");
}
int main(){
    char buf[16];
    setvbuf(stdout,0,2,0);
    memset(buf,0,sizeof(buf));
    read(0,buf,0x100);
}
