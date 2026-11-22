# LABORATORY REPORT 02
## SELECTION AND DECISION-MAKING IN C

**Student Name:** Victor Leken  
**Registration Number:** ENB211-0037/2025  
**Programme:** [Enter your programme]  
**Unit:** ICS 2175 – Introduction to Computer Programming  
**Laboratory Number:** 02  
**Experiment Title:** Selection and Decision-Making  
**Date Performed:** 21 November 2026  
**Development Environment:** Code::Blocks with GCC compiler  
**Submission Platform:** GitHub

---

## 1. Objective

The objective of this laboratory was to learn and apply selection and decision-making statements in the C programming language. The exercise focused on using relational operators and conditional statements such as `if`, `if-else`, and `else-if` to evaluate student marks, assign grades, and determine whether a student had passed or failed.

The laboratory also aimed to develop practical skills in compiling, executing, testing, troubleshooting C programs, and submitting programming work through GitHub using branches and pull requests.


## 2. Environment and Setup

The laboratory was conducted using a Windows-based computer with Code::Blocks as the integrated development environment (IDE) and the GCC compiler for compiling and executing C programs.

### 2.1 Operating System

The computer used was running Microsoft Windows 11 Pro, Version 26H2, with OS Build 26300.9974. Windows provided the operating environment for developing, compiling, running and testing the C program.

### 2.2 Development Tools

The program was developed using Code::Blocks version 25.03. Code::Blocks is a full-featured integrated development environment (IDE) designed to provide programmers with tools for writing, compiling, debugging and executing programs. Its plugin-based architecture allows additional functionality to be integrated into the development environment.

The GCC compiler was used as the compiler toolchain for the C programming language.

| Component | Specification |
|---|---|
| Operating System | Microsoft Windows 11 Pro |
| Windows Version | 26H2 |
| OS Build | 26300.9974 |
| IDE | Code::Blocks 25.03 |
| Programming Language | C |
| Compiler | GCC |
| Source File | `main.c` |

### 2.3 Setup Procedure

Code::Blocks was opened and the laboratory source file, `main.c`, was accessed. The program source code was entered, reviewed and saved before compilation. The source file was then built using the GCC compiler and executed to test its functionality. Different marks were entered to verify that the program correctly assigned grades and determined pass or fail status.

## 3. Exercise — Selection and Decision-Making

### 3.1 Introduction

The exercise involved developing a C program that accepts a student's mark and determines the corresponding grade and pass/fail status. The program demonstrates the use of conditional statements, relational operators and decision-making structures in C.

### 3.2 Final Source Code

The following is the final source code used in the laboratory practical, saved as `main.c`.

```c
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
```

### 3.3 Explanation of the Program

**1. Header file**

The statement `#include <stdio.h>` includes the standard input and output library. It allows the program to use functions such as `printf()` and `scanf()`.

**2. Main function**

The `int main(void)` function is the entry point of the program. Program execution begins from this function.

**3. Variable declaration**

The statement `int mark;` declares an integer variable called `mark`, which stores the student's entered mark.

**4. Accepting user input**

The `printf()` statement displays a message requesting the mark, while `scanf("%d", &mark)` reads the integer entered by the user and stores it in the variable.

**5. Grade classification using if-else-if**

The program uses relational operators and an if-else-if ladder to classify marks:

- 80–100: Grade A
- 70–79: Grade B
- 60–69: Grade C
- 50–59: Grade D
- 0–49: Grade F

The conditions are evaluated from top to bottom. Once a condition is satisfied, the corresponding grade is displayed.

**6. Pass/fail decision**

A separate `if-else` statement checks whether the mark is greater than or equal to 50. If the condition is true, the program displays Pass. Otherwise, it displays Fail.

**7. Return statement**

The statement `return 0;` indicates that the program has completed execution successfully.

### 3.4 Program Output

The program was executed with different input values to verify its grading decisions.

**Test Case 1: Mark = 85**

```text
Enter mark (0-100): 85
Grade: A
Status: Pass
```

**Test Case 2: Mark = 72**

```text
Enter mark (0-100): 72
Grade: B
Status: Pass
```

**Test Case 3: Mark = 40**

```text
Enter mark (0-100): 40
Grade: F
Status: Fail
```

### 3.5 Source Code Evidence

The source code was captured in Code::Blocks and saved in the project evidence folder.

- `report/screenshots/source-code 01.png`
- `report/screenshots/source-code-02.png`

These screenshots provide evidence of the program implementation.


## 4. Testing and Troubleshooting

### 4.1 Program Testing

The program was compiled and executed to verify that it correctly classified student marks into grades and determined pass/fail status.

Several test cases were performed using different input values to check the program's behaviour across the grading ranges.

The following table summarises the test results:

| Test | Input Mark | Expected Grade | Expected Status |
|---|---:|---|---|
| 1 | 0 | F | Fail |
| 2 | 40 | F | Fail |
| 3 | 50 | D | Pass |
| 4 | 72 | B | Pass |
| 5 | 79 | B | Pass |
| 6 | 80 | A | Pass |
| 7 | 85 | A | Pass |
| 8 | 100 | A | Pass |

### 4.2 Boundary Value Testing

Special attention was given to boundary values such as 50, 79 and 80. These values helped verify that the conditional statements correctly assigned grades at the transition points between grading ranges.

The results demonstrated that the program correctly classified the tested marks according to the provided grading scale.

### 4.3 Troubleshooting

During development, the source code was reviewed to ensure that the input statement, conditional expressions and output statements were correctly implemented.

The program was compiled and tested using different marks. The resulting outputs were checked against the expected grading scale to confirm that the decision-making logic worked correctly.

### 4.4 Testing Evidence

The following screenshots were captured and stored in the `report/screenshots/` directory:

- `input=0.png`
- `input=40.png`
- `input=50.png`
- `input=72.png`
- `input=79.png`
- `input=80.png`
- `input=85.png`
- `input=100.png`

These screenshots provide evidence of the program's execution and its results for the different test cases.

## 5. GitHub Workflow

### 5.1 Repository Setup

GitHub was used to manage and submit the Laboratory 02 programming work. The official Kiotolabs repository was used as the starting point. A personal fork was created under my GitHub account, `Leken-dev`, to allow me to work independently on the practical.

### 5.2 Branch Creation

An individual working branch was created using the required naming format:

`student/ENB211-0037/2025/lab02`

All Laboratory 02 changes were committed to this branch before being pushed to my GitHub fork.

### 5.3 Commit and Push Process

The completed source code and supporting screenshots were committed and uploaded to GitHub. A total of 12 commits were recorded, covering the program modification and supporting evidence files.

The submission included:
- The main C source file (`main.c`).
- Program output screenshots for different test marks.
- Source code screenshots.
- GitHub branch evidence.
- Pull request evidence.

### 5.4 Pull Request Submission

After pushing the working branch to my fork, I opened a pull request requesting that my changes be reviewed and merged into the official Kiotolabs repository.

The pull request was created with the following details:

**Pull Request Title:** Laboratory 02 Submission – ENB211-0037/2025

**Pull Request Number:** #20

**Base Repository:** Kiotolabs/kioto-ics2175-lab02

**Base Branch:** main

**Head Repository:** Leken-dev/kioto-ics2175-lab02

**Working Branch:** student/ENB211-0037/2025/lab02

**Commits:** 12

**Files Changed:** 12

**Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/20

### 5.5 Pull Request Status

At the time of preparing this report, the pull request was open and showed no merge conflicts. GitHub indicated that the changes could be automatically merged into the main branch.

The pull request was left open for the lecturer to review. I did not merge or close it.

### 5.6 GitHub Evidence

The following screenshot provides evidence of the submitted pull request:

`report/screenshots/pull-request.png`

The branch creation evidence is also available at:

`report/screenshots/branch.png`
### 5.7 GitHub Repository Files Evidence

A screenshot of the GitHub repository was captured to show the files uploaded for Laboratory 02. The screenshot displays the repository contents, including the C source file, project documentation, Makefile, GitHub Actions workflow and report evidence folder.

**Screenshot:** `report/screenshots/repository-files.png`

This screenshot provides evidence that the required project files were uploaded and are available in my GitHub repository.


## 6. Reflection

### 6.1 What I Learned

Through this laboratory exercise, I gained practical knowledge of selection and decision-making in the C programming language. I learned how to use relational operators such as `>=` to compare values and how to apply `if`, `else-if` and `if-else` statements to make decisions based on user input.

I also learned how to classify marks into different grades and determine pass or fail status using conditional statements. Additionally, the practical improved my understanding of compiling, executing and testing C programs using Code::Blocks.

The GitHub submission process also helped me understand how to create a working branch, commit changes, push files to a repository and submit a pull request for review.

### 6.2 Challenges Encountered

One of the important parts of the exercise was ensuring that the conditions were arranged in the correct order so that each mark received the appropriate grade.

Another challenge was learning and following the GitHub workflow, particularly creating an individual branch and opening a pull request to the official Kiotolabs repository.

### 6.3 What I Would Do Differently

In future programming exercises, I would pay more attention to input validation, test additional boundary values and review my source code before submitting it.

I would also organise my GitHub commits more carefully and ensure that all required screenshots and documentation are included before creating a pull request.

## 7. Conclusion

The Laboratory 02 exercise successfully introduced me to selection and decision-making in the C programming language.

I was able to develop a grading program using `if`, `else-if` and `if-else` statements, compile and execute the program, and test it using different mark values.

The exercise also improved my practical understanding of Code::Blocks, GCC, Git and GitHub. I successfully created an individual working branch and submitted my work through Pull Request #20 to the official Kiotolabs repository.

Overall, the laboratory objectives relating to conditional statements, grade classification, program testing and GitHub submission were achieved.




