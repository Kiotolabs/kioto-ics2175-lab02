#include <stdio.h>

int main(void) {
    int mark;
    char grade;
    char status[10];

    printf("Enter your mark (0-100): ");

    if (scanf("%d", &mark) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (mark < 0 || mark > 100) {
        printf("Invalid mark\n");
        return 1;
    }

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

    if (mark >= 50) {
        snprintf(status, sizeof(status), "Pass");
    } else {
        snprintf(status, sizeof(status), "Fail");
    }

    printf("Grade: %c\n", grade);
    printf("Status: %s\n", status);

    return 0;
}
