#include <stdio.h>

int main () {
    char char1;
    printf("size of char is: %d \n", sizeof(char1));
    printf("size of char is: %d \n", sizeof(char));
    printf("------------------------------ \n");
    
    printf("size of 'a' is: %d \n", sizeof('a')); // this is a character
    printf("size of \"a\" is: %d \n", sizeof("a")); // this is a string ending with \0
    printf("------------------------------ \n");

    int num1;
    printf("size of num is: %d \n", sizeof(num1));
    printf("size of int is: %d \n", sizeof(int));
    printf("------------------------------ \n");

    float num2;
    printf("size of num is: %d \n", sizeof(num2));
    printf("size of float is: %d \n", sizeof(float));
    printf("------------------------------ \n");

    double num3;
    printf("size of num is: %d \n", sizeof(num3));
    printf("size of double is: %d \n", sizeof(double));
    printf("------------------------------ \n");

    int arr[3];
    printf("size of int array with 3 elements is: %d \n", sizeof(arr));

    double brr[5];
    printf("size of double array with 5 elements is: %d \n", sizeof(brr));

    return 0;
}