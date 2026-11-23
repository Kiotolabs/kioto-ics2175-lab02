
#include <stdio.h>

int main(void)
{
    int mark;
    char grade;

    printf("Enter your mark (0-100): ");

    if (scanf("%d", &mark) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    if (mark < 0 || mark > 100) {
        printf("Invalid mark! Enter a mark between 0 and 100.\n");
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

    printf("Grade: %c\n", grade);

    if (mark >= 50) {
        printf("Status: Pass\n");
    } else {
        printf("Status: Fail\n");
    }

    switch (grade) {
        case 'A':
            printf("Excellent performance!\n");
            break;
        case 'B':
            printf("Very good performance!\n");
            break;
        case 'C':
            printf("Good performance!\n");
            break;
        case 'D':
            printf("You have passed.\n");
            break;
        case 'F':
            printf("You need to improve.\n");
            break;
    }

    return 0;
}
