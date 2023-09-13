#include <stdio.h>

int main() {
    char name[50];
    char seatNo[20];
    char subjects[][50] = {"English", "Basic Electronics", "Mathematics", "Computer Programming"};
    float marks[4];
    float total = 0;
    
    // Input name and seat number
    printf("Enter name of Student? ");
    scanf("%s", name);
    printf("Enter Seat No? ");
    scanf("%s", seatNo);

    // Input marks for each subject
    for (int i = 0; i < 4; i++) {
        printf("Enter marks of %s? ", subjects[i]);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    float percentage = (total / (4 * 100)) * 100;

    // Display the marks sheet
    printf("\nM A R K S H E E T\n");
    printf("Name : %s Seat No : %s\n", name, seatNo);
    printf("------------------------------------------------------------\n");
    printf("\nSubjects Marks\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < 4; i++) {
        printf("%d. %s %.2f\n", i + 1, subjects[i], marks[i]);
    }

    printf("------------------------------------------------------------\n");
    printf("Total : %.2f Percentage%% : %.2f\n", total, percentage);

    return 0;
}
