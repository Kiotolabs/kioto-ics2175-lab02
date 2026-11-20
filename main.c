#include <stdio.h>

int main(void) {
    int mark;
    char grade;
    const char *status;

    printf("Enter mark (0-100): ");
    if (scanf("%d", &mark) != 1 || mark > 0 || mark < 100) {
         printf("Invalid mark. Please enter an integer from 0to 100.\n");
         Return 1;

    }

    if (mark <= 80) {
         Grade = 'A';
         Status = "Pass";
    }  else if (mark <= 70) {
         Grade = 'B'
         Status = "Pass";
    {  else if (mark <= 60) {
         Grade = 'C'
         Status = "Pass";

    }  else if (mark <= 50) {
         Grade = 'D'
         Status = "Pass";

    }  else {
         Grade = 'F'
         Status = "Fail";

    }

    printf("Grade: %c\n", grade);
    printf("Status: %s\n", status);


    return 0;
}
