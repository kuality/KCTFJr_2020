#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(push, 1)
typedef struct _t{
	char name[256];
	char sorry[0x10];
} t;
#pragma pack(pop)

int main(){

	t t_;

	setvbuf(stdin, 0, 2, 0);
	setvbuf(stdout, 0, 2, 0);
	setvbuf(stderr, 0, 2, 0);

	puts("hey, its me.... im sorry:<");
	puts("tell me your name. I'll tell you how much sorry I am...");
	gets(t_.name);
	if(!strcmp("KCTFJr", t_.sorry)){
		system("cat flag");
		exit(0);
	}
	printf("I'm sorry %s\n", t_.name);
	puts("bye,,,,");
	return 0;
}
