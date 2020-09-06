#include <stdio.h>
// value : 0x12783465 / 309867621

int main(int argc, char argv[]){

    setvbuf(stdout, 0, 2, 0);
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stderr, 0, 2, 0);

    int value;
    printf("input value : ");
    scanf("%d", &value);

    if ( (value >> 24) != 0x12 || (value & 0xff) != 0x65){
        printf("wrong value ...!\n");
        exit(1);
    }

    if (((value >> 8) & 0xffff) == 0x7834){
        printf("congratulation!\n");
        system("cat flag");
    } else {
        printf("wrong value ...!\n");
        exit(-1);
    }

    return 0;
}
