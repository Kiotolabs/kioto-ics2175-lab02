# ICS 2175 - Laboratory 02 Report

## Student
- Name:LAURINE WAMBOI KARIUKI
- Registration number: ENB211-0132/2025
- Programme: ICS2175 COMPUTER PROGRAMMING AGRICULTURAL AND BIOSYSTEMS ENGINEERING

Title: Selection Statements in C Programming - Student Grading System

2. OBJECTIVE

The main objective of this practical exercise was to understand and apply selection statements in the C programming language.

The exercise aimed at learning how to use "if", "else if", and "else" statements to make decisions in a program. It also aimed at developing a simple grading system that accepts a student's marks, assigns a grade according to the marks obtained, and determines whether the student has passed or failed.

3. ENVIRONMENT AND SETUP

The practical exercise was carried out using a computer running the Windows operating system.

The programming environment used was Code::Blocks, which provides an environment for writing, compiling, debugging and executing C programs.

The GNU GCC compiler was used to translate the written C source code into an executable program.

Software and tools used:

- Operating system: Windows.
- IDE: Code::Blocks.
- Programming language: C.
- Compiler/toolchain: GNU GCC.
- Computer: HP laptop.

4. EXERCISE – SELECTION

The exercise involved developing a student grading system using the C programming language.

The program requests the user to enter a student's marks between 0 and 100. It then uses selection statements to determine the student's grade and examination status.

The grading system follows these conditions:

- 80–100: Grade A.
- 70–79: Grade B.
- 60–69: Grade C.
- 50–59: Grade D.
- Below 50: Grade F.

A student who scores 50 marks or above is considered to have passed, while a student who scores below 50 is considered to have failed.

Final Source Code

#include <stdio.h>

int main(void)
{
    int mark;

    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

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

    if (mark >= 50) {
        printf("Status: Pass\n");
    } else {
        printf("Status: Fail\n");
    }

    return 0;
}

Explanation of the Key Statements

a) "#include <stdio.h>"

This statement includes the standard input and output library. It allows the program to use functions such as "printf()" and "scanf()".

b) "int main(void)"

This is the main function where program execution begins.

c) "int mark;"

This declares an integer variable called "mark", which stores the marks entered by the user.

d) "printf()"

This function displays messages on the computer screen. In this program, it is used to request the student's marks and display the grade and examination status.

e) "scanf("%d", &mark);"

This statement accepts an integer entered by the user and stores it in the variable "mark". The "%d" format specifier is used for integer values, while "&mark" provides the address where the value is stored.

f) "if" statement

The "if" statement checks whether the student's marks are greater than or equal to 80. If the condition is true, the program displays Grade A.

g) "else if" statement

This checks additional conditions when the previous condition is false. It helps the program determine whether the student qualifies for Grade B, C or D.

h) "else" statement

This executes when none of the previous conditions is satisfied. In this program, it assigns Grade F to students who score below 50.

i) Pass and Fail selection

The second "if-else" statement checks whether the student's marks are at least 50. If the condition is true, the program displays Pass; otherwise, it displays Fail.

j) "return 0;"

This indicates that the program has completed execution successfully.

Sample Program Output

Example 1: Student scoring 85

Enter mark (0-100): 85
Grade: A
Status: Pass

Example 2: Student scoring 65

Enter mark (0-100): 65
Grade: C
Status: Pass

Example 3: Student scoring 45

Enter mark (0-100): 45
Grade: F
Status: Fail

5. TESTING AND TROUBLESHOOTING

Testing was important in checking whether the program could correctly assign grades and determine students' examination status.

Different marks can be entered to check whether the selection statements work as expected.

The following test cases can be used:

Marks entered| Expected grade| Status
100| A| Pass
80| A | Pass
79| B| Pass
70| B| Pass
69| C| pass
60| C| pass
59| D| pass
50| D| Pass
49| F| fail

One possible error when writing this program is forgetting the ampersand ("&") in the "scanf()" statement. The correct statement is "scanf("%d", &mark);". The ampersand ensures that the entered value is stored at the correct memory address.

Another important troubleshooting step is checking the arrangement of the "if", "else if", and "else" statements. Incorrect placement can cause compilation errors or incorrect results.

The program should also be improved by adding input validation to prevent marks below 0 or above 100 from being accept.

6. GITHUB WORKFLOW

GitHub was part of the practical requirements for managing and storing the programming project.

The source code can be uploaded to a GitHub repository to provide online storage and allow changes to be tracked.

The GitHub workflow involves the following steps:

1. Creating a repository on GitHub.
2. Adding the C source code to the project.
3. Creating a branch for the changes.
4. Committing the source code with a suitable commit message.
5. Pushing the changes to the GitHub repository.
6. Creating a pull request to propose merging the changes into the main branch.

GitHub project details:

- Repository URL: [https://github.com/Laurine446/kioto-ics2175-lab02.git]
- Branch name: [student/ENB211-0132/2025/lab02]
- Commit summary: Added student grading system using C selection statements.
- Pull request URL: [Insert your pull request link]

7. REFLECTION

Through this practical exercise, I gained a better understanding of how selection statements are used in C programming to make decisions.

I learned how to declare variables, receive input from users, display output and apply conditional statements to solve a simple programming problem.

One of the important lessons I learned was that the order of conditions matters when using "if" and "else if" statements. The program checks the conditions in sequence and executes the first condition that is true.

The most challenging part was understanding how to arrange the conditions correctly to ensure that every student receives the correct grade and examination status.

In future exercises, I would improve the program by adding input validation and handling incorrect entries to make it more reliable.

8. CONCLUSION

The practical exercise was successfully designed to demonstrate the use of selection statements in C programming.

The program accepts students' marks, assigns grades according to the specified grading system and determines whether a student has passed or failed.

The exercise helped me understand how "if", "else if", and "else" statements work together in decision-making. It also improved my understanding of writing, compiling, testing and executing C programs.

The objectives of the practical exercise were achieved, and I gained useful programming skills that can be applied in developing more advanced programs.

9. EVIDENCE REQUIREMENTS

[alt text](image.png)
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (14).png>)
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (13).png>)
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (12).png>)
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (11).png>)
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (9).png>)
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (8).png>)
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (7).png>)
pull request
![alt text](<../../../../OneDrive/Pictures/Screenshots/2026-11-22 (16).png>)
