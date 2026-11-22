#include <stdio.h>

int main(void) {
    int mark;

    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

    char grade;
    if (mark >= 80) {
        grade = 'A';
    } else if (mark >= 70) {
        grade = 'B';
    } else if (mark >= 60) {
        grade = 'C';
    } else if (mark >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    const char *status;
    if (mark >= 50) {
        status = "Pass";
    } else {
        status = "Fail";
    }


    printf("Grade: %c\n", grade);
    printf("Status: %s\n", status);

    return 0;
}