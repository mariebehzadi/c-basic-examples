#include <stdio.h>
#include <stdbool.h>
#include <math.h> 

bool is_armstrong_number(int candidate) {
    printf("the number is: %d \n", candidate);
    
    // count the number of digits
    int num = candidate;
    int count = 0;

    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("%d has %d digits. \n", candidate, count);

    // check the sum with the formula
    int sum, rem = 0;
    int var = candidate;

    while (var > 0) {
        rem = var % 10;
        sum += pow(rem, count);
        var = var / 10;
    }

    if (sum == candidate) {
        return true;
    }

    return false;
}

int main() {
    int candidate = 17;
    bool result = is_armstrong_number(candidate);
    
    if (result) {
        printf("%d is an armstrong number.", candidate);
    } else {
        printf("%d is not an armstrong number.", candidate);
    }

    return 0;
}
