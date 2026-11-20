# JOMO KENYATTA UNIVERSITY OF AGRICULTURE AND TECHNOLOGY

## ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING

### LABORATORY 02: SELECTION AND DECISION-MAKING

**INDIVIDUAL TECHNICAL REPORT**

**Student Name:** Patrick Nthanga Mutiso  
**Registration Number:** ENB211-0026/2025  
**Programme:** Agricultural and Biosystems Engineering  
**Unit:** ICS 2175 – Introduction to Computer Programming  
**Laboratory Number:** 02  
**Date Performed:** 20 November 2026  
**GitHub Username:** patoh104  

---

## 1. OBJECTIVES

The objectives of this practical were:

1. To understand and apply relational and logical operators in C programming.
2. To implement selection statements, including if, if-else and else-if ladders.
3. To develop a program that classifies students' marks into grades and pass/fail statuses.
4. To understand the importance of testing boundary values and validating user input.
5. To practise using Git and GitHub for version control and submission of programming assignments.

## 2. ENVIRONMENT AND SETUP

The practical was carried out using the following software and tools:

| Component | Description |
|---|---|
| Operating system | Windows 11 Pro |
| Programming language | C |
| IDE | Code::Blocks |
| Compiler | GCC (MinGW) |
| Version control | Git |
| Online repository | GitHub |
| Terminal | Windows PowerShell |

The official Kiotolabs Laboratory 02 repository was forked into my GitHub account and cloned to my local computer. An individual working branch was created using the required registration-number format:

`student/ENB211-0026/2025/lab02`

The supplied repository structure was retained.

## 3. EXERCISE – SELECTION AND DECISION-MAKING

### 3.1 Introduction

Selection statements are used in programming to make decisions depending on whether specified conditions are true or false.

In C programming, the if statement executes a block of code when a condition is satisfied, while if-else provides alternative actions depending on the result of a condition.

The else-if ladder is useful when several conditions need to be evaluated, such as classifying examination marks into different grades.

### 3.2 Source Code

The following program was provided in the laboratory instructions and entered into the `main.c` source file.

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

- `#include <stdio.h>` provides standard input and output functions.
- `int mark;` declares an integer variable to store the student's mark.
- `printf()` displays a message requesting the user to enter a mark.
- `scanf()` reads the mark entered by the user.
- The else-if ladder compares the mark against the grading ranges.
- The second if-else statement determines whether the student has passed or failed.
- `return 0;` indicates successful termination of the program.

### 3.4 Grading Scale

| Mark range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

### 3.5 Compilation and Execution

The program was compiled using the GCC compiler supplied with Code::Blocks through Windows PowerShell.

The compiler was accessed using its installation path:

`C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe`

The following command was used:

```powershell
& "C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" main.c -o main.exe
```

The compilation command completed without displaying an error.

The executable was then prepared for execution using:

```powershell
.\main.exe
```

**Program output:** To be inserted after completing and capturing the actual execution tests.

## 4. TESTING AND TROUBLESHOOTING

The program is intended to be tested using the following input values:

| Input mark | Expected grade | Expected status |
|---:|---|---|
| 85 | A | Pass |
| 72 | B | Pass |
| 40 | F | Fail |
| 50 | D | Pass |
| 80 | A | Pass |
| 0 | F | Fail |
| 100 | A | Pass |
| 79 | B | Pass |

Boundary values to be checked include 0, 49, 50, 59, 60, 69, 70, 79, 80 and 100.

**Troubleshooting:** During the initial attempt to compile the program using PowerShell, the command `gcc` was not recognised. This indicated that the compiler directory was not available through the system PATH. The problem was addressed by locating the GCC executable inside the Code::Blocks MinGW installation directory and using its full path to compile the source file.

Further execution tests and input validation will be documented after completion.

## 5. GITHUB WORKFLOW

The official public Kiotolabs Laboratory 02 repository was forked into my GitHub account and cloned to my local computer.

The following details identify the submission:

- **GitHub username:** patoh104
- **Personal repository:** https://github.com/patoh104/kioto-ics2175-lab02
- **Working branch:** student/ENB211-0026/2025/lab02
- **Pull request:** To be added after submission.

The practical requires at least three meaningful commits documenting the development of the work. The branch will be pushed to the personal GitHub repository, followed by a pull request targeting the original Kiotolabs repository's main branch.

## 6. REFLECTION

This practical has helped me understand how selection statements are used to control the flow of a C program.

I learned how relational operators such as `>=` are used to compare values and how an else-if ladder can classify examination marks into different grades.

One challenge encountered was accessing GCC directly through PowerShell. I addressed this by locating the compiler executable and using its full installation path.

I also learned the importance of using GitHub branches and commits to organise programming work and maintain a record of changes.

## 7. CONCLUSION

The practical introduced the use of selection and decision-making statements in C programming. It demonstrated how conditions can be used to classify examination marks and determine pass or fail status.

The compilation stage was completed successfully using GCC through PowerShell. Further execution testing, input validation, GitHub submission and evidence collection are required to complete the practical objectives.

