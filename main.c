#include <stdio.h>

int main(void) {
    int mark;

<<<<<<< Updated upstream
    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

=======
    /* TODO: Read the mark from standard input */
    /* Hint: scanf("%d", &mark); */
    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

    /* TODO: Determine the grade using if / else-if */
    /* A: 80-100, B: 70-79, C: 60-69, D: 50-59, F: 0-49 */
>>>>>>> Stashed changes
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

<<<<<<< Updated upstream
=======
    /* TODO: Determine Pass or Fail */
>>>>>>> Stashed changes
    const char *status;
    if (mark >= 50) {
        status = "Pass";
    } else {
        status = "Fail";
    }

<<<<<<< Updated upstream

=======
    /* TODO: Print "Grade: X" and "Status: Pass/Fail" */
>>>>>>> Stashed changes
    printf("Grade: %c\n", grade);
    printf("Status: %s\n", status);

    return 0;
}
