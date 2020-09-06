#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//flag : revsing_is_haha
char key2[10] = "g_is_haha";
int main(int argc, char *argv[]){
    char key[17];
    memset(key,0,16);
    strcpy(key,"rev");
    key[3] = 's';
    key[4] = 'i';
    key[5] = 'n';
    strcat(key,key2);

    if(strcmp(key,argv[1])!=0 || strlen(argv[1])!=15)
        printf("incorrect\n");
    else
        printf("correct\n");
}
