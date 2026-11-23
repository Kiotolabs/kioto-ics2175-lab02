# KIOTO iLMs – COMPUTING LABORATORY

## ICS 2175: INTRODUCTION TO COMPUTER PROGRAMMING

### LABORATORY 02 REPORT

**Title:** Selection and Decision-Making

## 1. COVER INFORMATION

- **Student Name:** Clinton Yugo
- **Registration Number:** ENB211-0111/2025
- **Programme:** Agricultural and Biosystems Engineering
- **Unit:** ICS 2175 – Introduction to Computer Programming
- **Laboratory Number:** 02
- **Programming Language:** C
- **Date Performed:** 23 November 2026

## 2. OBJECTIVE

The main objective of this laboratory practical was to understand and apply selection and decision-making statements in C programming.

The specific objectives were:

1. To understand and use relational and logical operators.
2. To apply `if`, `if-else` and `else-if` statements.
3. To use `switch` statements in decision-making.
4. To validate user input and handle invalid marks.
5. To classify student marks into different grades.
6. To determine whether a student has passed or failed.
7. To develop practical skills in compiling, testing and managing C programs using Git and GitHub.

## 3. ENVIRONMENT AND SETUP

The laboratory practical was carried out using a Windows 11 computer. Code::Blocks was used as the integrated development environment, while GCC (MinGW) was used as the C compiler.

The following tools and resources were used:

- **Operating System:** Windows 11
- **IDE:** Code::Blocks
- **Compiler:** GCC (MinGW) version 14.2.0
- **Programming Language:** C
- **Online Compiler:** Programiz Online C Compiler
- **Version Control:** Git
- **Code Repository:** GitHub
- **Terminal:** Windows PowerShell

The original source file, `main.c`, was maintained separately from the improved source file, `improve.c`. The improved program was tested using Programiz Online C Compiler to verify its grading logic, switch statement and input validation.

Git and GitHub were used to manage and submit the laboratory project.

## 4. EXERCISE: SELECTION AND DECISION-MAKING

### 4.1 Introduction

The exercise involved using selection statements in C programming to make decisions based on a student's marks. The program accepts a mark from the user, assigns a grade and displays whether the student has passed or failed.

### 4.2 Original Program (`main.c`)

The original source file, `main.c`, was retained as provided in the laboratory repository. It was used as the starting point for understanding selection statements.

**Original source code:**

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

### 4.3 Improved Program (`improve.c`)

A separate file named `improve.c` was created to improve the original program.

The improved program includes:

1. Input validation to ensure that the user enters a valid number.
2. Range checking to accept marks between 0 and 100.
3. An `if-else-if` statement to assign grades.
4. A `switch` statement to display the grade description.
5. An `if-else` statement to determine the pass or fail status.

**Improved source code:**

```c
#include <stdio.h>

int main(void)
{
    int mark;
    char grade;

    printf("Enter mark (0-100): ");

    if (scanf("%d", &mark) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (mark < 0 || mark > 100) {
        printf("Invalid mark! Enter 0-100.\n");
        return 1;
    }

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

    printf("Grade: %c\n", grade);

    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Very Good\n");
            break;
        case 'C':
            printf("Good\n");
            break;
        case 'D':
            printf("Pass\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
    }

    if (mark >= 50) {
        printf("Status: Pass\n");
    } else {
        printf("Status: Fail\n");
    }

    return 0;
}
```

### 4.4 Grading Scale

| Marks | Grade | Description | Status |
|---|---|---|---|
| 80–100 | A | Excellent | Pass |
| 70–79 | B | Very Good | Pass |
| 60–69 | C | Good | Pass |
| 50–59 | D | Pass | Pass |
| 0–49 | F | Fail | Fail |

### 4.5 Compilation and Testing

The improved program was compiled using GCC (MinGW) version 14.2.0. The compiler completed without displaying errors. A separate syntax check using `-Wall -Wextra -std=c11 -fsyntax-only` also completed without warnings or errors.

Execution of the locally compiled executable was blocked by the Windows Application Control policy. Therefore, the improved program was tested using the Programiz Online C Compiler.

The test cases included valid marks, marks outside the accepted range and non-numeric input. Screenshots of the program and test outputs were saved in the `report/screenshots/` directory.

### 4.6 Input Validation

The program checks whether the entered value is numeric and whether the mark falls between 0 and 100. Invalid entries produce an error message instead of assigning a grade.

## 5. PROGRAM OUTPUT AND TEST RESULTS

### 5.1 Original Program (`main.c`)

The original program was tested using different student marks to check whether the grading conditions worked correctly.

| Input Mark | Expected Grade | Expected Status |
|---:|:---:|---|
| 85 | A | Pass |
| 80 | A | Pass |
| 79 | B | Pass |
| 72 | B | Pass |
| 60 | C | Pass |
| 50 | D | Pass |
| 40 | F | Fail |
| 0 | F | Fail |

### 5.2 Improved Program (`improve.c`)

The improved program was tested using valid and invalid inputs to verify its grading system and input validation.

| Input | Expected Output |
|---|---|
| 100 | Grade A – Excellent – Pass |
| 85 | Grade A – Excellent – Pass |
| 72 | Grade B – Very Good – Pass |
| 55 | Grade D – Pass – Pass |
| 45 | Grade F – Fail – Fail |
| 0 | Grade F – Fail – Fail |
| -5 | Invalid mark |
| 105 | Invalid mark |
| abc | Invalid input |

### 5.3 Test Results

The test cases demonstrate how the program handles different marks. Valid marks are assigned the correct grades, while invalid marks and non-numeric entries are rejected by the improved program.

Screenshots of the program code and test outputs are provided in the `report/screenshots/` directory.

### 5.4 Troubleshooting

During testing, the locally compiled `improve.exe` was blocked by Windows Application Control. Although the compilation and syntax checks completed without errors, the executable could not run locally.

To continue testing, I used the Programiz Online C Compiler. This allowed me to test valid marks, invalid marks and non-numeric input and observe the program's responses.

## 6. GITHUB WORKFLOW

Git and GitHub were used to manage the laboratory project and submit the completed work for lecturer review.

### 6.1 Repository Information

- **GitHub Username:** `clintonyugo-ops`
- **Repository Name:** `kioto-ics2175-lab02`
- **Repository URL:** https://github.com/clintonyugo-ops/kioto-ics2175-lab02
- **Original Repository:** https://github.com/Kiotolabs/kioto-ics2175-lab02
- **Submission Branch:** `student/ENB211-0111/2025/lab02`

### 6.2 Commit Summary

A total of eight commits were included in the pull request. The commits covered the improved C program, source-file updates and screenshot evidence.

### 6.3 Pull Request

A pull request was created to submit the laboratory work to the lecturer's original repository.

- **Pull Request Number:** #40
- **Pull Request Title:** Lab 02 submission — ENB211-011/2025
- **Base Repository:** `Kiotolabs/kioto-ics2175-lab02`
- **Base Branch:** `main`
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/40
- **Status:** Open

The pull request was left open for the lecturer to review. It was not merged or closed.

## 7. REFLECTION

Through this laboratory practical, I gained practical knowledge of selection and decision-making statements in C programming.

I learned how to use `if`, `if-else`, `else-if` and `switch` statements to control program execution. I also understood how relational and logical operators are used to compare values and make decisions.

One of the challenges I encountered was that Windows Application Control blocked the execution of my locally compiled improved program. I solved this by using the Programiz Online C Compiler to test the program.

I also gained experience using Git and GitHub to manage source files, organize commits, upload screenshots and submit my work through a pull request.

In future practicals, I would test my programs earlier, check for errors carefully and organize my screenshots as I complete each task.

## 8. CONCLUSION

The laboratory practical was successfully completed, and the main objectives were achieved. I gained a better understanding of selection and decision-making statements in C programming.

The practical demonstrated how `if-else-if` and `switch` statements can be used to classify student marks and determine pass or fail status. I also learned the importance of input validation and handling invalid entries.

Furthermore, I gained practical experience in compiling, testing and managing C programs using GCC, Git and GitHub.

Overall, the laboratory improved my programming skills and understanding of decision-making in C.

## 9. EVIDENCE

The following screenshots provide evidence of the work completed during the ICS 2175 Laboratory 02 practical.

### 9.1 GitHub Repository Fork

**File:** `fork.png`

Shows the project repository forked from the lecturer's original GitHub repository.

### 9.2 Original C Program

**Files:** `main-c-01.png`, `main-c-02.png`

Show the original source code (`main.c`) in the programming environment.

### 9.3 Improved C Program in Code::Blocks

**Files:** `improve-c-01.png`, `improve-c-02.png`, `improve-c-03.png`

Show the improved source code (`improve.c`) and the Code::Blocks project environment.

### 9.4 Program Testing and Outputs

The following screenshots show the results of testing the improved program using different inputs:

- `improve-c-output=100.png` – Mark of 100.
- `improve-c-output=0.png` – Mark of 0.
- `impoved-c-output=55.png` – Mark of 55.
- `improve-c-output=105.png` – Invalid mark of 105.
- `improce-c-output=-5.png` – Invalid mark of -5.
- `improve-coutput-abc.png` – Non-numeric input.

### 9.5 Additional Original Program Test Outputs

**Files:**

`input-0output.png`, `input-100output.png`, `input-40output.png`, `input-50output.png`, `input-72output.png`, `input-79output.png`, `input-80output.png`, `input-85output.png`

These screenshots provide additional evidence of the original program's grading results.

### 9.6 Pull Request Submission

**File:** `pull-request.png`

Shows the GitHub pull request submitted to the original Kiotolabs repository for lecturer review.

All screenshots are stored in the `report/screenshots/` directory of the project repository.