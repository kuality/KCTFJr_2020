#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int cash = 100;
int bet = 0;

void intro() {
	printf("░██████╗██╗░░░██╗███╗░░░███╗███╗░░░███╗███████╗██████╗░  ██████╗░░█████╗░██████╗░████████╗██╗░░░██╗\n");
	printf("██╔════╝██║░░░██║████╗░████║████╗░████║██╔════╝██╔══██╗  ██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝╚██╗░██╔╝\n");
	printf("╚█████╗░██║░░░██║██╔████╔██║██╔████╔██║█████╗░░██████╔╝  ██████╔╝███████║██████╔╝░░░██║░░░░╚████╔╝░\n");
	printf("░╚═══██╗██║░░░██║██║╚██╔╝██║██║╚██╔╝██║██╔══╝░░██╔══██╗  ██╔═══╝░██╔══██║██╔══██╗░░░██║░░░░░╚██╔╝░░\n");
	printf("██████╔╝╚██████╔╝██║░╚═╝░██║██║░╚═╝░██║███████╗██║░░██║  ██║░░░░░██║░░██║██║░░██║░░░██║░░░░░░██║░░░\n");
	printf("╚═════╝░░╚═════╝░╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░░░░╚═╝░░░\n\n\n");

	printf("=====================================================================================================\n");
	printf("=========================WELCOME! ARE YOU QUALIFIED TO GET INTO THE PARTY?===========================\n");
	printf("=====================================================================================================\n\n");
}

void myinfo() {
	printf("\n\n$$You've got this much money$$\n");
	printf("\t$$$  %d  $$$\n\n", cash);
}

void isqual() {
	printf("You need AT LEAST $100,000 to get into the party\n\nLet me see...");

	sleep(2);
	printf("\n");
	if (cash > 100000) {
		printf("WELCOME TO THE PARTY :D\n");
		system("cat flag.txt");
		exit(0);
	}
	else {
		printf("Are you tryin to get here with THAT?\n");
		printf("Go aWay, YoU sCuM\n\n\n");
	}
}

int play() {
	int num = 0, realnum;
	printf("nothin' special.\n");
	printf("I'm gonna roll the dice, and you guess between 1~6\n");
	printf("easy, ain't it?\n\n");

	printf("How much are you going to bet? : ");
	while (1) {
		printf("How much are you going to bet? \nDo not bet more than you have: ");
		scanf("%d", &bet);
		if (bet > cash) {
			printf("hey that's nono\n");
		}
		else {
			break;
		}
	}
	printf("Guess the dice's number : ");
	scanf("%d", &num);

	srand((unsigned int)time(NULL));
	realnum = (rand() % 6) + 1;

	printf("It was %d!\n ", realnum);
	if (realnum == num)
		return 1;
	else
		return 0;
}

void lottery() {
	int money;
	printf("\n\n=====Welcome to the 𝐿𝑂𝑇𝑇𝐸𝑅𝑌=====\n");
	if (play()) {
		printf("Ayy congrats! Here you go!");
		printf("+ $%d\n\n", bet);
		cash += bet;
	}
	else {
		printf("Too bad soo saddd :(\nGood Luck next time!\n");
		printf("- $%d\n\n", bet);
		cash -= bet;
	}
}

int main() {
	int choice;
	setvbuf(stdout, 0, 2, 0);
    	setvbuf(stdin, 0, 2, 0);
    	setvbuf(stderr, 0, 2, 0);
	intro();
	while (1) {
		printf("[ M E N U ]\n");
		printf("1. My cash\n");
		printf("2. Enter the Party\n");
		printf("3. Go To the Lottery\n");
		printf("4. Exit\n\n");
		printf("What's your choice? : ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				myinfo();
				break;
			case 2:
				isqual();
				break;
			case 3:
				lottery();
				break;
			case 4:
				printf("too bad soo sad:(\n\n");
				exit(0);
			default:
				printf("Wrong choice, That's NOT what you should Do.\n");
				break;
		}
	}

}
