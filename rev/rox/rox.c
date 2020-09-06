/*
KCTFJr{You_should_always_doubt_the_xor_operation}
*/

#include <stdio.h>
#include <fcntl.h>
int main(int argc, char argv[]){
    char flag[0x100] = {};
    printf("input flag : ");
    fgets(flag, sizeof(flag),  stdin);

    int f = open("./output", O_CREAT | O_WRONLY);
    if (f < 0){
        fprintf(stderr, "file open error");
        exit(1);
    }
    
    char tmp;
    for (int i = 0; i < strlen(flag) - 1; i++){
        tmp = flag[i] ^ flag[i+1];
        write(f, &tmp, 1);
    }
    close(f);
}
