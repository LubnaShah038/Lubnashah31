#include <stdio.h>

int main() {
    int num1, num2;
    int sum, product, difference, division, remainder, total;
    
    // Input the first number
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    
    // Input the second number
    printf("Enter last number: ");
    scanf("%d", &num2);

    // Calculate various operations
    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    
    if (num2 != 0) {
        division = num1 / num2;
        remainder = num1 % num2;
    } else {
        division = 0;
        remainder = 0;
    }

    // Calculate the total
    total = sum + product + difference + division + remainder;

    // Display the results
    printf("Sum of %d and %d is : %02d\n", num1, num2, sum);
    printf("Product of %d and %d is : %02d\n", num1, num2, product);
    printf("Difference between %d and %d is : %02d\n", num1, num2, difference);
    printf("Division of %d and %d is : %02d\n", num1, num2, division);
    printf("Remainder of %d and %d is : %02d\n", num1, num2, remainder);
    printf("--------------------------------------------------------------\n");
    printf("Total is : %d\n", total);

    return 0;
}
