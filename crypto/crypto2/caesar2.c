#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

//void error_handling(char * message);
int Caesar(char* message, char* message2);

int main(int argc, char*argv[]){

	setvbuf(stdin, 0, 2, 0);
	setvbuf(stdout, 0, 2, 0);
	setvbuf(stderr, 0, 2, 0);
	srand(time(NULL));

	char flag[] = "KCTFJr{veni, vidi, vici}";
	char msg[] = "University division is only for Republic of Korea University";
	char msg2[100] = {0,};
	clock_t start,finish;
	for(;;){
		if(Caesar(msg, msg2) != -1)
			break;
	}
	start = clock();
	printf("Encrypted Message : %s\nDecrypted Message : ", msg2);
	read(0, msg2, 100);
	finish = clock();
	if((double)(finish - start)/CLOCKS_PER_SEC > 60){
		printf("Time over\n");
		exit(0);
	}
	int p=0;
	for(int i = 0; msg[i] != NULL; i++){
		if(msg[i] != msg2[i])p=1;
	}
	if(p == 1)
		printf("Wrong\n");
	else
		printf("%s\n", flag);
}

int Caesar(char* message, char* message2){
	int i;
	for(i = 0; message[i] != NULL; i++){
		message2[i] = message[i];
	}
	message2[i] = NULL;
	i = rand() % 26;
	if(i == 0) return -1;
	for(int j = 0; message2[j] != NULL; j++){
		if(message2[j] == ',')
			continue;
		if(message2[j] == ' ')
			continue;
		if(message2[j] <'a'){
			message2[j] = (message2[j] - 'A' + i) %26 + 'A';
			continue;
		}
		message2[j] = (message2[j]-'a' + i) %26 + 'a';
	}
	return 0;
}
	
