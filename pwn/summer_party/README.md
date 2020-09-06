# Summer_Party





문제 : summer_party



출제의도 : 코드의 취약점을 찾아 exploit할 수 있는가?






```c
void isqual() {
	printf("You need AT LEAST $100,000 to get into the party\n\nLet me see...");

	sleep(2);
	printf("\n");
	if (cash > 100000) {
		printf("WELCOME TO THE PARTY :D\n");
		system("cat flag.txt");
		exit(0);
	}
```
  
  
  
  
이 문제의 의도는 $1000000 이상을 갖게 되어 파티에 참가하는 것이다.



```c
//play() 일부
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
```


```c
//lottery()
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
```


다음은 차례로 play()의 일부, 그리고 lottery()의 일부이다. 자신이 가진 돈보다 작은 값을 베팅할 수 밖에 없고, 1~6사이의 값을 맞추지 못하면 그 값을 차감한다.


여기서 베팅을 음수만큼 베팅한다면, 값을 맞추지 못한 경우에는 음수를 빼기때문에 결론적으로 cash가 늘어나게 된다. 따라서 그냥 lottery에서 `-1000000`을 베팅한 뒤, 예측을 틀리면 된다.(예측이 맞았다면 다시 하자..)






***KCTFJr{D1d_n0T_s33_MinU$_c0M1n}***
