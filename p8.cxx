#include <stdio.h>

int main() {
    int inputSeconds, hours, minutes, seconds;

    // Input the number of seconds
    printf("Input Seconds? ");
    scanf("%d", &inputSeconds);

    // Calculate hours, minutes, and remaining seconds
    hours = inputSeconds / 3600;
    inputSeconds %= 3600;
    minutes = inputSeconds / 60;
    seconds = inputSeconds % 60;

    // Display the result
    printf("Hours Minutes Seconds\n");
    printf("%d %d %d\n", hours, minutes, seconds);

    return 0;
}
