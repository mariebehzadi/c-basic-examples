// Maryam Behzadi
// mariebehzadi@gmail.com
// License: BSD

#include <stdio.h>
#include <stdlib.h>

void swap (int *ptr1, int *ptr2) {
    int tmp;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;

}

int main () {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before Swap: num1 = %d and num2 = %d \n", num1, num2);
    swap (&num1, &num2);
    printf("After Swap: num1 = %d and num2 = %d \n", num1, num2);
    
    return 0;
}