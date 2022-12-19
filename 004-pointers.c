#include <stdio.h>

int main() {
    int num = 30;
    printf("%d \n", num);

    int *p = &num;
    printf("%d \n", &num);
    printf("%d \n", p);

    printf("%p \n", &num);
    printf("%p \n", p);

    *p = 20;
    printf("%d \n", num);
    
    return 0;
}