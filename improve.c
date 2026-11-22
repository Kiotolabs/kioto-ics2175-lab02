#include <stdio.h>

int main(void)
{
    int mark;
    char grade;

    printf("Enter your mark (0-100): ");

    // Validate that the input is an integer
    if (scanf("%d", &mark) != 1)
    {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    // Validate the mark range
    if (mark < 0 || mark > 100)
    {
        printf("Invalid mark! Enter a mark between 0 and 100.\n");
        return 1;
    }

    // Determine the grade using if-else
    if (mark >= 80)
    {
        grade = 'A';
    }
    else if (mark >= 70)
    {
        grade = 'B';
    }
    else if (mark >= 60)
    {
        grade = 'C';
    }
    else if (mark >= 50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // Display grade
    printf("Grade: %c\n", grade);

    // Determine pass or fail using a logical condition
    if (mark >= 50 && mark <= 100)
    {
        printf("Status: Pass\n");
    }
    else
    {
        printf("Status: Fail\n");
    }

    // Use switch to display a grade message
    switch (grade)
    {
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

        default:
            printf("Unknown grade.\n");
    }

    return 0;
}