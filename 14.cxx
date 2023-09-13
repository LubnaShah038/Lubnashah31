#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Input the number
    printf("Enter any number? ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Display the sum of digits
    printf("Sum of digits = %d\n", sum);

    return 0;
}
