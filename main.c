#include <stdio.h>

int main(void) {
    int mark;

    /* TODO: Read the mark from standard input */
    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

    /* TODO: Determine the grade using if / else-if */
    /* A: 80-100, B: 70-79, C: 60-69, D: 50-59, F: 0-49 */
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

    /* TODO: Determine Pass or Fail */
    /* TODO: Print "Grade: X" and "Status: Pass/Fail" */
    if (mark >= 50) {
        printf("Status: Pass\n");
    } else {
        printf("Status: Fail\n");
    }

    return 0;
}