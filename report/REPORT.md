
# ICS 2175 – Laboratory 02 Report

## 1. Student Information

- **Full Name:** Ruth Owiti
- **Registration Number:** ENB211-0122/2025
- **Programme:** C
- **Unit Code:** ICS 2175
- **Unit Name:**  Introduction to Computer Programming
- **Laboratory Number:** 02
- **Laboratory Title:** Selection and Decision-Making
- **Date Performed:** 20 November 2026



## 2. Objective

The objective of this laboratory exercise was to understand and apply selection and decision-making statements in the C programming language.

The specific objectives were:

1. To understand and use relational and logical operators in forming conditions.
2. To implement `if`, `if-else`, and `else-if` statements in C.
3. To use conditional statements to classify student marks into grades and determine pass or fail status.
4. To practise compiling, running, and testing C programs using Code::Blocks.
5. To understand the use of Git and GitHub in managing and submitting programming projects.



## 3. Environment and Setup

### 3.1 Hardware and Software Environment

The laboratory exercise was performed using a computer running Windows 11 Pro.

The following software tools were used:

- **Operating System:** Windows 11 Pro
- **Windows Version:** 26H2
- **OS Build:** 26300.9974
- **IDE:** Code::Blocks 25.03
- **Programming Language:** C
- **Compiler:** GNU GCC 14.2.0
- **Toolchain:** MinGW-w64
- **Architecture:** x86_64

### 3.2 Development Environment

Code::Blocks 25.03 was used as the integrated development environment (IDE) for writing, compiling and executing the C program.

The GNU GCC 14.2.0 compiler, provided through the MinGW-w64 toolchain, was used to compile the source code.

### 3.3 Setup Procedure

1. Opened Code::Blocks.
2. Opened the Laboratory 02 project.
3. Entered and saved the C source code.
4. Compiled the program using the GCC compiler.
5. Executed the program using different test marks.
6. Checked the program output to verify grade classification and pass/fail status.




## 4. Exercise – Selection

### 4.1 Problem Description

The exercise involved developing a C program that accepts a student's examination mark and classifies it into a grade using conditional statements.

The program also determines whether the student has passed or failed based on the grading scale provided in the laboratory instructions.

The grading system uses the following ranges:

| Mark Range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |


4.2 Final Source Code


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





### 4.3 Explanation of the Program

The program uses several C programming concepts to classify student marks.

1. **Header file:** `#include <stdio.h>` provides standard input and output functions such as `printf()` and `scanf()`.

2. **Variable declaration:** `int mark;` declares an integer variable used to store the student's examination mark.

3. **Input statement:** `scanf("%d", &mark);` accepts an integer mark entered by the user.

4. **Else-if ladder:** The program uses an if-else-if structure to compare the entered mark against the grading ranges and assign the appropriate grade.

5. **Pass/fail decision:** A separate if-else statement checks whether the mark is greater than or equal to 50. Marks of 50 and above receive a Pass status, while marks below 50 receive a Fail status.

6. **Return statement:** `return 0;` indicates successful termination of the program.



4.4 Program Output
Based on the grading logic, include this test summary:
Input mark	Expected grade	Expected status
0	F	Fail
40	F	Fail
50	D	Pass
72	B	Pass
79	B	Pass
80	A	Pass
85	A	Pass
100	A	Pass



### 4.4 Program Output

The program was executed using different input marks to verify that the grading conditions worked correctly.

The test results demonstrated that the program correctly classified marks into grades A, B, D and F and determined the corresponding pass or fail status.

The test cases included lower boundary values, grade transition values and the maximum mark of 100.



## 5. Testing and Troubleshooting

### 5.1 Test Cases

The program was tested using different input marks to verify the accuracy of the grading and pass/fail classification.

The following test cases were used:

| Test Case | Input Mark | Expected Grade | Expected Status |
|---|---:|---|---|
| 1 | 0 | F | Fail |
| 2 | 40 | F | Fail |
| 3 | 50 | D | Pass |
| 4 | 72 | B | Pass |
| 5 | 79 | B | Pass |
| 6 | 80 | A | Pass |
| 7 | 85 | A | Pass |
| 8 | 100 | A | Pass |

The results confirmed that the program correctly classified the tested marks according to the grading scale.



### 5.2 Boundary Testing

Boundary testing was performed to verify the program's behaviour at important grading limits.

The values tested included 0, 49, 50, 59, 60, 69, 70, 79, 80 and 100.

Special attention was given to marks 50, 60, 70 and 80 because they represent transitions between grades.

The program correctly assigned the appropriate grade and pass/fail status at the tested boundaries.



### 5.3 Troubleshooting

During the setup process, an issue occurred when checking the GCC compiler through Command Prompt. The command `gcc --version` was not recognised by Windows because the compiler directory was not included in the system PATH environment variable.

The issue was investigated by locating the GCC executable inside the Code::Blocks MinGW directory.

The compiler version was successfully verified by executing GCC directly using its full file path. The installed compiler was GCC 14.2.0.

This helped confirm that the compiler was installed even though Windows could not recognise the GCC command directly.



### 5.4 Testing Evidence

Screenshots of the program execution for different input values are stored in the `report/screenshots/` directory.

The screenshots provide evidence of the program's grading and pass/fail classification for the tested marks.




## 6. GitHub Workflow

### 6.1 Repository Setup

The official Kiotolabs Laboratory 02 repository was used as the starting point for the practical.

The repository was forked into my personal GitHub account to create an independent copy where I could complete and manage my work.

The fork was cloned to my local computer using GitHub Desktop.



### 6.2 Working Branch

An individual working branch was created to keep my Laboratory 02 changes separate from the main branch.

- **Branch Name:** student/ENB211-0122/2025/lab02
- **Base Branch:** main

All laboratory modifications were carried out on the individual working branch.



### 6.3 Commit History

Git was used to track changes made during the laboratory exercise.

The work was organised into meaningful commits covering:

1. Completion of the selection programming exercise.
2. Implementation and testing of the grading logic.
3. Completion of the individual laboratory report and supporting evidence.




### 6.4 Pull Request

A pull request will be created from my personal GitHub fork to the official Kiotolabs Laboratory 02 repository.

- **Upstream Repository:** https://github.com/Kiotolabs/kioto-ics2175-lab02
- **Base Branch:** main
- **Head Branch:** student/ENB211-0122/2025/lab02
- **Pull Request URL:** To be added after submission.


## 7. Reflection

Through this laboratory exercise, I gained practical experience in using selection and decision-making statements in the C programming language.

I learned how to use relational operators to compare values and how to apply `if`, `if-else`, and `else-if` statements to control the flow of a program. I also improved my understanding of how to classify student marks into different grades and determine pass or fail status.

One of the challenges I encountered was verifying that the GCC compiler was correctly installed and accessible. The `gcc --version` command was initially not recognised in the Command Prompt. I resolved this by running the compiler directly using its installation path, which confirmed that GCC 14.2.0 was installed.

I also gained experience using GitHub Desktop to manage my project, create a separate branch, commit changes and push my work to GitHub.

If I were to repeat this exercise, I would improve the program by adding stronger input validation, testing more boundary values and exploring other selection structures such as the `switch` statement.



## 8. Conclusion

The laboratory exercise achieved its main objective of introducing selection and decision-making in C programming.

I successfully developed and tested a program that uses conditional statements to classify student marks into grades and determine pass or fail status. The exercise improved my understanding of conditional logic, program compilation, testing and version control using Git and GitHub.

Overall, the practical activity strengthened my programming skills and provided a foundation for developing more complex C programs.



## 9. Evidence

The following screenshots are included in the `report/screenshots/` directory as evidence of the work completed during Laboratory 02.

### 9.1 Code::Blocks Source Code

The following screenshots show the project and C source code in Code::Blocks:

- `source-code-codeblocks-01.png`
- `source-code-codeblocks02.png`

### 9.2 Program Execution and Testing

The following screenshots show the program output for different test marks:

- `input=0.png`
- `input=40.png`
- `input=50.png`
- `input=72.png`
- `input=79.png`
- `input=80.png`
- `input=85.png`
- `input=100.png`

### 9.3 GitHub Repository and Branch

- `feature-branch.png`

This screenshot provides evidence of the laboratory branch on GitHub.

### 9.4 Pull Request



The screenshots provide visual evidence of the source code, program execution, testing and GitHub workflow.