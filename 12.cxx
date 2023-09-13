#include <stdio.h>

int main() {
    char character;

    // Input a character
    printf("Enter any Character? ");
    scanf(" %c", &character);  // Note the space before %c to consume any leading whitespace.

    // Print the ASCII value
    printf("ASCII Value of %c character is : %d\n", character, (int)character);

    return 0;
}
