#include <stdio.h>

int main() {
    int inputDays, years, weeks, remainingDays;

    // Input the number of days
    printf("Input Days? ");
    scanf("%d", &inputDays);

    // Calculate years, weeks, and remaining days
    years = inputDays / 365;
    inputDays %= 365;
    weeks = inputDays / 7;
    remainingDays = inputDays % 7;

    // Display the result
    printf("Years Weeks Days\n");
    printf("%d %d %d\n", years, weeks, remainingDays);

    return 0;
}
