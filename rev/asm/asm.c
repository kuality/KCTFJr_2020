#include <stdio.h>
//flag : @sm__is__h@rd@@#
char flag[17] = "@rob[lyXWq6yp3N2\x00";
int main(){
    int i;
    for(i = 0; i < 16; i++){
        switch(i%3){
            case 0: flag[i] -= i;break;
            case 1: flag[i] += i;break;
            case 2: flag[i] ^= i;break;
        }

    }
    printf("%s",flag);
    return 0;
}
