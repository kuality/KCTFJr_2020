#include <stdio.h>
#include <stdlib.h>
int main() {
        setvbuf(stdout, 0, 2, 0);
        setvbuf(stdin, 0, 2, 0);
        setvbuf(stderr, 0, 2, 0);
        char str[100];
        int a;
        int b;
        printf("str address : %d\n", &str);
        printf("num2 address : %d\n", &b);

        scanf("%d", &a);
        scanf("%d", a);
        scanf("%s", &b);

        system(str);
        return 0;
}

