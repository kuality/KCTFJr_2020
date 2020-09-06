#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//■□ㅤ★
int flag[17] = { 0, };
void ban() {
	for (int i = 0; i < 16; i++)
	{
		switch (i)
		{
		case 0:
		case 1:
		case 2:
		case 3:
			if (flag[i])
			{
				printf("■ ");
			}
			else
				printf("□ ");
			break;
		case 4:
			if (flag[i])
			{
				printf("■\n");
			}
			else
				printf("□\n");
			break;
		case 5:
			if (flag[15])
			{
				printf("■ ㅤ ㅤ ");
			}
			else
				printf("□ ㅤ ㅤ ");
			break;
		case 6:
			if (flag[5])
			{
				printf("■\n");
			}
			else
				printf("□\n");
			break;
		case 7:
			if (flag[14])
			{
				printf("■ ㅤ★ ㅤ");
			}
			else
				printf("□ ㅤ★ ㅤ");
			break;
		case 8:
			if (flag[6])
			{
				printf("■\n");
			}
			else
				printf("□\n");
			break;
		case 9:
			if (flag[13])
			{
				printf("■ ㅤ ㅤ ");
			}
			else
				printf("□ ㅤ ㅤ ");
			break;
		case 10:
			if (flag[7])
			{
				printf("■\n");
			}
			else
				printf("□\n");
			break;
		case 11:
			if (flag[12])
			{
				printf("■ ");
			}
			else
				printf("□ ");
			break;
		case 12:
			if (flag[11])
			{
				printf("■ ");
			}
			else
				printf("□ ");
			break;
		case 13:
			if (flag[10])
			{
				printf("■ ");
			}
			else
				printf("□ ");
			break;
		case 14:
			if (flag[9])
			{
				printf("■ ");
			}
			else
				printf("□ ");
			break;
		case 15:
			if (flag[8])
			{
				printf("■\n");
			}
			else
				printf("□\n");
			break;


		}
	}
}
int main() {
	

	setvbuf(stdin, 0, 2, 0);
	setvbuf(stdout, 0, 2, 0);
	setvbuf(stderr, 0, 2, 0);
	
	printf("Fill the blank!!\n");
	ban();
	int num;
	printf("---------------------------------------------\n");
	printf("시계방향으로 박스번호가 1~16까지 있다.\n규칙에 맞춰 모든 박스를 채우고 0을 누르시오.\n");
	while (1)
	{
		
		printf("Number : ");
		
		scanf(" %d", &num);
		sleep(0.2);
		system("clear");
		if (num == 1)
		{
			flag[0] ^= 1;
			flag[1] ^= 1;
			flag[15] ^= 1;
		}
		else if (num == 2) {
			flag[0] ^= 1;
			flag[1] ^= 1;
			flag[2] ^= 1;
		}
		else if (num == 3) {
			flag[1] ^= 1;
			flag[2] ^= 1;
			flag[3] ^= 1;
		}
		else if (num == 4) {
			flag[2] ^= 1;
			flag[3] ^= 1;
			flag[4] ^= 1;
		}
		else if (num == 5) {
			flag[3] ^= 1;
			flag[4] ^= 1;
			flag[5] ^= 1;
		}
		else if (num == 6) {
			flag[4] ^= 1;
			flag[5] ^= 1;
			flag[6] ^= 1;
		}
		else if (num == 7) {
			flag[5] ^= 1;
			flag[6] ^= 1;
			flag[7] ^= 1;
		}
		else if (num == 8) {
			flag[6] ^= 1;
			flag[7] ^= 1;
			flag[8] ^= 1;
		}
		else if (num == 9) {
			flag[7] ^= 1;
			flag[8] ^= 1;
			flag[9] ^= 1;
		}
		else if (num == 10) {
			flag[8] ^= 1;
			flag[9] ^= 1;
			flag[10] ^= 1;
		}
		else if (num == 11) {
			flag[9] ^= 1;
			flag[10] ^= 1;
			flag[11] ^= 1;
		}
		else if (num == 12) {
			flag[10] ^= 1;
			flag[11] ^= 1;
			flag[12] ^= 1;
		}
		else if (num == 13) {
			flag[11] ^= 1;
			flag[12] ^= 1;
			flag[13] ^= 1;
		}
		else if (num == 14) {
			flag[12] ^= 1;
			flag[13] ^= 1;
			flag[14] ^= 1;
		}
		else if (num == 15) {
			flag[13] ^= 1;
			flag[14] ^= 1;
			flag[15] ^= 1;
		}
		else if (num == 16) {
			flag[0] ^= 1;
			flag[14] ^= 1;
			flag[15] ^= 1;
		}
		else if (num == 0) {
			if (flag[0] && flag[1] && flag[2] && flag[3] && flag[5] && flag[6] && flag[7] && flag[8] && flag[9] && flag[10] && flag[11] && flag[12] && flag[13] && flag[14] && flag[15])
			{
				printf("Congratuation!!");
				sleep(0.5);
				system("cat flag.txt");
				exit(1);
			}
			else {
				printf("hmmm...\nWay out!!\n");
				exit(1);
			}
		}
		else {
			printf("1...\n");
			sleep(1);
			printf("2...\n");
			sleep(2);
			printf("3...\n");
			sleep(3);
			printf("4.......\n");
			sleep(4);
			printf("쉽지않은 인생이야");
			sleep(4);
			system("clear");
			exit(1);
		}
			printf("Fill the blank!!\n");
			ban();
			printf("---------------------------------------------\n");
		        printf("시계방향으로 박스번호가 1~16까지 있다.\n규칙에 맞춰 모든 박스를 채우고 0을 누르시오.\n");
	}

}
