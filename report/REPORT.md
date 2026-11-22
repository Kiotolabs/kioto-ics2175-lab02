# ICS 2175 - Laboratory 02 Report

## Student
- Name:Irungu Robin gitau
- Registration number:ENB211-0139/2025
- Programme:Agricultural and Biosystems engineering

## (Complete all sections per the lab instructions)
OBJECTIVES:
Use relational and logical operators to build conditions.
Implement if, if-else and else-if ladders.
Use switch for multi-way decisions.
Validate user input and handle boundary cases.
Use Git and GitHub to version, publish and submit  practical work.
ENVIRONMENT;
Windows version,11
 Code::Blocks version,25.03
  compiler,GNU GCC COMPILER

  Exercise
  
  #include <stdio.h>

int main(void)
{
    int mark;
    printf("Enter mark (0-100):");
    scanf("%d",&mark);

    if (mark>=80){
        printf("Grade: A\\n");
    } else if (mark>=70) {
        printf("Grade: B\\n");
    }else if (mark>=60) {
        printf("Grade: C\\n");

    }else if ("mark>=50") {
      printf("Grade: D\\n");
    }else{
        printf("Grade: F\\n");
    }
    if (mark>=50){
     printf("Status: Pass\\n");
    }else {
    printf("Status: fail\\n");
    }

    return 0;
}
1. #include <stdio.h> – Provides standard input and output functions.
2. int main(void) – Defines the main function where execution begins.
3. int mark; – Declares an integer variable to store the student's mark.
4. scanf("%d", &mark); – Receives the mark entered by the user.
5. if (mark < 0 || mark > 100) – Checks whether the mark is outside the allowed range.
6. if (mark >= 80) – Assigns grade A when the mark is at least 80.
7. else if – Checks the remaining grade ranges.
8. else – Assigns grade F when the mark is below 50.
9. if (mark >= 50) – Determines whether the student has passed.
10. return 0; – Terminates the program successfully.
Why is else-if used?

It allows the program to check several conditions in order. Once a condition is true, the corresponding statement executes and the remaining conditions are skipped.

Run the program using the following test values.
Input mark	Expected grade	Expected status
85	A	Pass
72	B	Pass
40	F	Fail
50	D	Pass
80	A	Pass
0	F	Fail
100	A	Pass
79	B	Pass

Example output 1:

Input:
Enter mark (0-100): 85


Output:
Grade: A
Status: Pass


Example output 2:

Input:
Enter mark (0-100): 40


Output:
Grade: F
Status: Fail


Example output 3:

Input:
Enter mark (0-100): 50


Output:
Grade: D
Status: Pass


Example output 4 – Invalid mark:

Input:
Enter mark (0-100): 120


Output:
Invalid mark! Enter a value between 0 and 100.


5. Understanding the switch statement
A switch statement is used when a program must select one action from several possible choices.

Example: Displaying a grade description.

#include <stdio.h>

int main(void)
{
    char grade;

    printf("Enter grade (A, B, C, D or F): ");
    scanf(" %c", &grade);

    switch (grade)
    {
        case 'A':
            printf("Excellent performance\n");
            break;

        case 'B':
            printf("Very good performance\n");
            break;

        case 'C':
            printf("Good performance\n");
            break;

        case 'D':
            printf("Satisfactory performance\n");
            break;

        case 'F':
            printf("Failed\n");
            break;

        default:
            printf("Invalid grade entered\n");
    }

    return 0;
}



Explanation:
- switch(grade) evaluates the value stored in the variable.
- case 'A' executes when the grade is A.
- break stops execution from continuing into the next case.
- default executes if none of the cases matches.
6. Improving input validation
The first program checks whether a numerical mark is between 0 and 100. However, it should also check whether the user enters letters instead of numbers.

Replace:
scanf("%d", &mark);


With:
if (scanf("%d", &mark) != 1) {
    printf("Invalid input! Please enter a number.\n");
    return 1;
}


This checks whether scanf() successfully reads an integer.

Screenshot of the GitHub repository showing your files;
![alt text](<Screenshot of the GitHub repository showing your files.png>)
Screenshot of Code::Blocks with the project and source file open;
(<Screenshot (33).png>)
Screenshot of successful program output for at least three test cases.
![alt text](<Screenshot (25).png>) ![alt text](<Screenshot (26).png>) ![alt text](<Screenshot (27).png>)
Repository URL: [ Kiotolabs/kioto-ics2175-lab02]

Branch name: student/ENB211-0139/2025/lab02

Pull request URL: [Insert your pull request URL]

Commit summaries:

Complete selection exercises.

Implement if/else grading logic.

Complete report and tests.






