#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;

    // Input the number
    printf("Enter any number? ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    // Display the reversed number
    printf("Reverse of %d is: %d\n", number, reversed);

    return 0;
}
