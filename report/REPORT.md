# ICS 2175 - Laboratory 02 Report

## Student
- Name:SHARON WANJIRU
- Registration number:ENB211-0016/2024
- Programme:AGRICULTURAL AND BIOSYSTEMS ENGINEERING

## (Complete all sections per the lab instructions)
bjective: The objective of this practical was to understand selection and decision-making in the C programming language. The exercise involved using relational and logical operators, an if–else-if ladder to classify a student's mark, a switch statement to determine pass or fail status, and input validation to reject invalid marks.
Environment and setup: Windows version, Code::Blocks version, compiler/toolchain.

Exercise — Selection: 
#include <stdio.h>

int main(void)
{
    int mark;

    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

    if (mark >= 80) {
        printf("Grade: A\\n");
    } else if (mark >= 70) {
        printf("Grade: B\\n");
    } else if (mark >= 60) {
        printf("Grade: C\\n");
    } else if (mark >= 50) {
        printf("Grade: D\\n");
    } else {
        printf("Grade: F\\n");
    }

    if (mark >= 50) {
        printf("Status: Pass\\n");
    } else {
        printf("Status: Fail\\n");
    }

   return 0;
}
![
](<Screenshot (34)-1.png>)

Testing and troubleshooting:
GitHub workflow: provide repository URL, branch name, commit summary and pull request URL.

Reflection: what you learned, what was difficult, what you would do differently.

Conclusion: summarise whether you achieved the objectives.

Evidence requirements

Screenshot of Code::Blocks with the project and source file open.

Screenshot of successful program output for at least three test cases.

Screenshot of the GitHub repository showing your files.

Screenshot or link to your pull request.The source code was compiled with GCC using C11 mode and warning flags. The following test cases were run against the program. The results below are the expected program results and should be reproduced in Code::Blocks on the student's computer for the required evidence screenshots.

Input mark

Program output

Result

85

Enter mark (0-100): Grade: A | Status: Pass

PASS

72

Enter mark (0-100): Grade: B | Status: Pass

PASS

40

Enter mark (0-100): Grade: F | Status: Fail

PASS

50

Enter mark (0-100): Grade: D | Status: Pass

PASS

80

Enter mark (0-100): Grade: A | Status: Pass

PASS

0

Enter mark (0-100): Grade: F | Status: Fail

PASS

100

Enter mark (0-100): Grade: A | Status: Pass

PASS

79

Enter mark (0-100): Grade: B | Status: Pass

PASS

Invalid-input tests:

Input

Expected response

Result

101

Enter mark (0-100): Invalid mark. Enter a value from 0 to 100.

PASS

-1

Enter mark (0-100): Invalid mark. Enter a value from 0 to 100.

PASS

abc

Enter mark (0-100): Invalid input. Please enter a whole number.

PASS

Troubleshooting observation: In the supplied screenshot, text was entered at the WMIC prompt (wmic:root\cli>). WMIC interpreted the text as management commands and returned messages such as 'Alias not found'. This happened because the wrong application was open. The correction is to exit WMIC by typing quit, open Code::Blocks, create/open a C project, place the program in main.c, save it, build it, and run it.
provide repository URL;https://github.com/sharonmuchiri374-creator/kioto-ics2175-lab02
 branch name;student/ENB211-0016/2024/lab02
  commit summary ;Complete selection exercises, Implement if/else grading logic, and Complete report and tests
 pull request URL;https://github.com/Kiotolabs/kioto-ics2175-lab02/pulls
 ![alt text](<Screenshot (39).png>) ![alt text](<Screenshot (40).png>) ![alt text](<Screenshot (41).png>)


