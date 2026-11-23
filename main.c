#include <stdio.h>

int main(void)
{
    int mark;

    printf("Enter mark (0-100): ");

    if (scanf("%d", &mark) != 1) {
        printf("Invalid input: please enter a whole number.\n");
        return 1;
    }

    if (mark < 0 || mark > 100) {
        printf("Invalid mark: must be between 0 and 100.\n");
        return 1;
    }

    if (mark >= 80) {
        printf("Grade: A\n");
    } else if (mark >= 70) {
        printf("Grade: B\n");
    } else if (mark >= 60) {
        printf("Grade: C\n");
    } else if (mark >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    switch (mark / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
            printf("Status: Pass\n");
            break;
        default:
            printf("Status: Fail\n");
            break;
    }

    return 0;
}
