#include <stdio.h>

int main() {

    int num_1;
    int factorial=1;

    printf("Input a number: ");
    scanf("%d", &num_1);

    // Check positive, negative, zero
    if (num_1 > 0)
        printf("Positive Number\n\n");
    else if (num_1 < 0)
        printf("Negative Number\n\n");
    else
        printf("Number is 0");

    // Check even / odd
    if (num_1 % 2 == 0)
        printf("Even Number\n\n");
    else
        printf("Odd Number\n\n");

    // Factorial (only for positive numbers)
    if (num_1 > 0) {
        for (int i = 1; i <= num_1; i++) {
            factorial = factorial * i;
        }
        printf("Factorial = %d\n", factorial);
    } else {
        printf("Factorial is not defined for negative numbers or zero.\n");
    }

    return 0;
}
