#include <stdio.h>

int main () {
    int a = 10;
    int b = 20;

    printf("a = %d \n", a);
    printf("b = %d \n", b);

    int tmp = a;
    a = b;
    b = tmp;

    printf("a = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}

