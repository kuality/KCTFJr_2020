#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int check;
	char buffer[40];
	char choice, a;

	setvbuf(stdout, 0, 2, 0);
  	setvbuf(stdin, 0, 2, 0);
    	setvbuf(stderr, 0, 2, 0);
	printf("Hi! Welcome\n");
	while (1) {
		printf("\n1. Baby\n");
		printf("2. On\n");
		printf("3. Fire!\n");
		printf("\nWhat's your choice? : ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				printf("Are you a Baby?\n");
				printf("Type Y or N : ");
				scanf(" %c", &a);
				if (a == 'Y' || a == 'y')
					printf("ㅡㅡ 양심이 없네\n\n\n");
				else {
					printf("Go away Old man!");
					exit(0);
				}
				break;
			case 2:
				printf("On? no..... OFF!\n");
				exit(0);
				break;
			case 3:
				printf("Fire!!\n");
				scanf("%s", buffer);
				if (check = "\xde\xad\xbe\xef") {
					printf("Hey that's what you call bof\n");
					system("cat flag.txt");
				}
				break;
			default:
				printf("Wrong choice. Think better than that.\n");
				break;
		}
	}
}

