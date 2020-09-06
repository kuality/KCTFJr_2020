#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <fcntl.h>
char check[64];
void status() {
	puts("Are you love Kua1ity?\n");
	puts("1. Yes I am!!!\n");
	puts("2. NoNoNoNoNoNo\n");
}
unsigned int init() {
	system("/usr/bin/clear");
	setvbuf(stdout, 0, 2, 0);
   	setvbuf(stdin, 0, 2, 0);
   	setvbuf(stderr, 0, 2, 0);
	memset(check, 0, 0x40);
	return alarm(0x1Fu);
}
int main(void) {
	/////////////////
	char num1[8];
	char name[64];
	int num2;

	/////////////////
	memset(name, 0, sizeof(name));
	init();

	puts("Hello, what is your name?\n");
	read(0, name, 0x50u);
	if (strlen(name) == 0) {
		puts("Are you kidding me???");
		exit(1);
	}
	strcpy(check, name);
	status();

	read(0, num1, 8u);
	num2 = atoi(num1);
	if (num2 > 0)
	{
		printf("Your answer is %s\n", num1);
		if (num2 != 1)
		{
			if (num2 == 2)
			{
				puts("Me too ^______O______^\n");
				exit(1);
			}
			puts("Wrong choose @________@\n");
			puts("What are you doing????\n");
			exit(1);
		}
		puts("hmm...hmm...hmm...");
		sleep(1);
	}
	else
	{
		puts("Wrong choose @________@\n");
		puts("What are you doing????\n");
		exit(1);
	}

	puts("I love you ##===##\n");
	puts("Can you tell me your name again?");
	read(0, name, 0x100u);
	if (strcmp(name, check) > 0)
	{
		puts("Are you kidding me....?\n");
		exit(1);
	}
	else
	{
		puts("Have a Good Day :)");
	}
	return 0;
}
