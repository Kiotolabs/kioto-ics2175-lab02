# KIOTO iLMs

## ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING

# LABORATORY 02

## SELECTION AND DECISION-MAKING

### INDIVIDUAL TECHNICAL REPORT

**Student Name:** Peter Mwai  
**Registration Number:** ENB211-0028/2025  
**Programme:** Bachelor of Science in Agricultural and Biosystems Engineering  
**Year of Study:** Second Year  
**GitHub Username:** muleepeter04-ops  
**Date:** 20 November 2026

---

# 1. OBJECTIVES

The main objective of this laboratory exercise was to develop practical skills in selection and decision-making using the C programming language.

The specific objectives were:

1. To understand and apply relational and logical operators in C programming.
2. To implement conditional statements using `if`, `if-else` and `else-if`.
3. To develop a program that classifies examination marks into different grades.
4. To determine whether a student has passed or failed based on the entered mark.
5. To practise writing, compiling, executing and testing C programs using Code::Blocks.
6. To understand the use of Git and GitHub in managing and submitting programming assignments.

# 2. ENVIRONMENT AND SETUP

The practical was carried out using a Windows-based computer with the following development tools:

| Component | Description |
|---|---|
| Operating System | Windows 11 |
| Integrated Development Environment | Code::Blocks |
| Programming Language | C |
| Compiler | GNU GCC |
| Version Control | Git |
| Online Repository | GitHub |

Code::Blocks provided the environment for writing and editing the source code. The GCC compiler was used to compile the program, while GitHub was used to host and submit the practical work.

The compiler was confirmed to be detected in Code::Blocks before proceeding with the programming exercise.

# 3. EXERCISE: SELECTION AND DECISION-MAKING

## 3.1 Exercise Description

The exercise involved developing a C program that accepts a student's examination mark and assigns a grade according to the grading scale provided in the laboratory instructions.

The program also determines the student's examination status as either Pass or Fail.

The grading scale used was:

| Mark Range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

## 3.2 Source Code

The following is the C program developed for the grading exercise:

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

## 3.3 Explanation of the Program

**Variable declaration**

The statement `int mark;` declares an integer variable that stores the examination mark entered by the user.

**Input and output**

The `printf()` function displays a message requesting the user to enter a mark. The `scanf()` function receives the entered value and stores it in the variable `mark`.

**Grading using conditional statements**

The program uses an `if-else-if` ladder to compare the entered mark against different grade boundaries.

The conditions are evaluated from the highest mark to the lowest. Once a condition is satisfied, the corresponding grade is displayed.

**Pass and Fail determination**

A separate `if-else` statement checks whether the entered mark is greater than or equal to 50.

Marks of 50 and above receive a Pass status, while marks below 50 receive a Fail status.

**Program termination**

The statement `return 0;` indicates successful termination of the program.

## 3.4 Program Output

The following examples show the expected output for three different examination marks.

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

# 4. TESTING AND TROUBLESHOOTING

Testing is an important part of programming because it helps identify errors and confirm that a program produces the expected results.

The grading program was designed to handle different mark ranges, including the boundary values between grades.

The following test cases were selected to examine the grading logic:

| Input | Expected Grade | Expected Status |
|---:|:---:|---|
| 85 | A | Pass |
| 72 | B | Pass |
| 40 | F | Fail |
| 50 | D | Pass |
| 80 | A | Pass |
| 0 | F | Fail |
| 100 | A | Pass |
| 79 | B | Pass |

The conditions were arranged in descending order to ensure that higher marks were classified correctly before lower ranges were considered.

The program uses the supplied grading logic. However, validation for non-numeric inputs and marks outside the 0–100 range has not yet been implemented. This is an area for further improvement.

## 4.1 Test Evidence

The execution screenshots are stored in the project folder:

`report/screenshots_lab2/`

The screenshots include the following test cases:

| Figure | Screenshot filename | Test input |
|---|---|---:|
| Figure 2 | `input=85-output.png` | 85 |
| Figure 3 | `input=72-output.png` | 72 |
| Figure 4 | `input=40-output.png` | 40 |
| Figure 5 | `input=50-output.png` | 50 |
| Figure 6 | `input=80-output.png` | 80 |
| Figure 7 | `input=0-output.png` | 0 |
| Figure 8 | `input=100-output.png` | 100 |
| Figure 9 | `input=79-output.png` | 79 |

# 5. GITHUB WORKFLOW AND SUBMISSION

GitHub was used to manage and submit the laboratory exercise through the repository provided by the lecturer.

The submission process involved using a personal repository and an individual working branch.

## 5.1 Repository Information

**GitHub Username:** muleepeter04-ops

**Personal Repository:**

https://github.com/muleepeter04-ops/kioto-ics2175-lab02

**Working Branch:**

`student/ENB211-0028/2025/lab02`

**Original Repository:**

https://github.com/Kiotolabs/kioto-ics2175-lab02

**Base Branch:** `main`

## 5.2 Pull Request Information

**Pull Request Title:**

Lab 02 Submission — ENB211-0028/2025

**Pull Request Number:** #3

**Pull Request Status:** Open

**Commits Submitted:** 2

The pull request was opened from my personal GitHub repository to the original Kiotolabs repository for review and assessment.

**Pull Request Link:**

https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/3

## 5.3 Importance of Version Control

This exercise introduced the importance of version control in software development.

Git helps track changes made to source code, while GitHub provides an online platform for hosting repositories and submitting programming projects.

The use of branches and pull requests also makes it possible for individual contributions to be reviewed before being incorporated into the original project.

# 6. REFLECTION

This laboratory exercise provided an opportunity to improve my practical understanding of selection and decision-making in C programming.

I learned how conditional statements enable a program to make decisions based on values entered by a user.

One of the important lessons was understanding how an `else-if` ladder evaluates conditions sequentially. I also learned that arranging conditions correctly is essential when classifying values into different ranges.

The exercise improved my confidence in using Code::Blocks to write and compile C programs.

I also gained practical knowledge of GitHub, particularly the use of repositories, branches, commits and pull requests when submitting programming assignments.

One area that required attention was ensuring that the grading conditions correctly handled the different mark ranges.

In future programming exercises, I would place more emphasis on input validation and testing boundary cases to make programs more reliable.

# 7. CONCLUSION

The laboratory exercise provided practical experience in applying selection and decision-making statements in C programming.

The grading program demonstrated how `if`, `else-if` and `else` statements can be used to classify examination marks and determine student performance status.

The practical also introduced the use of Git and GitHub for version control and submission of programming assignments.

Overall, the exercise strengthened my understanding of basic programming logic and provided a foundation for developing more advanced programs.

# 8. APPENDICES AND EVIDENCE

The following screenshots provide supporting evidence of the programming work and GitHub submission.

## Appendix A: Source Code Evidence

**Figure 1: C source code in Code::Blocks**

File: `source-code-codeblocks.png`

Location: `report/screenshots_lab2/source-code-codeblocks.png`

## Appendix B: Program Execution Evidence

The following screenshots show the program outputs for different test inputs.

- **Figure 2:** Test case with mark 85 — `input=85-output.png`
- **Figure 3:** Test case with mark 72 — `input=72-output.png`
- **Figure 4:** Test case with mark 40 — `input=40-output.png`
- **Figure 5:** Test case with mark 50 — `input=50-output.png`
- **Figure 6:** Test case with mark 80 — `input=80-output.png`
- **Figure 7:** Test case with mark 0 — `input=0-output.png`
- **Figure 8:** Test case with mark 100 — `input=100-output.png`
- **Figure 9:** Test case with mark 79 — `input=79-output.png`

## Appendix C: GitHub Repository and Branch Evidence

**Figure 10: GitHub branch evidence**

File: `featurebranch.png`

Location: `report/screenshots_lab2/featurebranch.png`

## Appendix D: Pull Request Evidence

**Figure 11: Open pull request submitted to Kiotolabs**

File: `pull request.png`

Location: `report/screenshots_lab2/pull request.png`

---

**END OF REPORT**

**Student:** Peter Mwai  
**Registration Number:** ENB211-0028/2025  
**Unit:** ICS 2175 – Introduction to Computer Programming  
**Laboratory:** 02 – Selection and Decision-Making