
#include <stdio.h>

int main() {
    float basicPay, grossPay, hra, da;

    // Ask the user to enter the basic pay
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);

    // Calculate House Rent Allowance (HRA) and Dearness Allowance (DA)
    hra = 0.20 * basicPay;
    da = 0.40 * basicPay;

    // Calculate Gross Pay
    grossPay = basicPay + hra + da;

    // Print the pay slip
    printf("\n** Pay Slip **\n");
    printf("Basic Pay: %.2f\n", basicPay);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("Gross Pay: %.2f\n", grossPay);

    return 0;
}