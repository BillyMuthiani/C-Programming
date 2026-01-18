#include <stdio.h>
//produce pdf(Dekut,school of cs & I.t, semester 1 transcript, unit code unit name, grade)

int main() {
    int marks[7];
    int sum = 0;
    float average;
    int i;

    printf("Enter marks for 7 units:\n");

    // Inputting loop
    for (i = 0; i < 7; i++) {
        printf("Unit %d: ", i + 1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }


    average = sum / 7.0;

    // Outputting loop
    printf("\nMarks Entered\n");
    for (i = 0; i < 7; i++) {
        printf("Unit %d: %d\n", i + 1, marks[i]);
    }


    printf("\nAverage Marks = %.2f\n", average);


    printf("Grade: ");

    if (average >= 70 && average <= 100) {
        printf("A\n");
    }
    else if (average >= 60) {
        printf("B\n");
    }
    else if (average >= 50) {
        printf("C\n");
    }
    else if (average >= 40) {
        printf("D\n");
    }
    else if (average >= 0) {
        printf("E\n");
    }
    else {
        printf("Invalid marks\n");
    }

    return 0;
}
