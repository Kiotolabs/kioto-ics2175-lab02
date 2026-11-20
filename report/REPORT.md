# ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING

# LABORATORY 02 REPORT
## SELECTION AND DECISION-MAKING

### 1. COVER INFORMATION

**Student Full Name:** BRIYAN MWENDWA MAKETE

**Registration Number:** ENB211-0027/2025

**Programme:** C

**Unit Code:** ICS 2175

**Unit Name:** Introduction to Computer Programming

**Laboratory Number:** 02

**Laboratory Title:** Selection and Decision-Making

**Date Performed:** 20 November 2026

**GitHub Username:** mwendwamakete-source

---

### 2. OBJECTIVE

The main objective of this practical was to understand how selection and decision-making statements work in C programming.

I wanted to learn how to use relational and logical operators to create conditions and how to apply if, if-else and else-if statements when making decisions in a program.

The practical also aimed to help me understand how a computer program can compare a student's marks, assign the correct grade and determine whether the student has passed or failed.

Additionally, I wanted to improve my skills in writing, compiling, running and testing C programs using Code::Blocks and submitting my work through GitHub.

---

### 3. ENVIRONMENT AND SETUP

The practical was carried out using a Windows computer.

The tools used included:

- Operating System: Microsoft Windows.
- IDE: Code::Blocks.
- Programming Language: C.
- Compiler: GCC (MinGW).
- Version Control: Git.
- Online Repository: GitHub.

Code::Blocks was used to write, edit, compile and execute the C program.

The official Kiotolabs Laboratory 02 repository was used as the starting point. The project contained the source file, configuration files and testing evidence.

The main source file used for the practical was `main.c`.

---

### 4. EXERCISE: SELECTION AND DECISION-MAKING

#### 4.1 Understanding Selection Statements

Selection statements allow a program to make decisions depending on whether a condition is true or false.

During this practical, I studied the following statements:

**if statement:** Executes a block of code when a specified condition is true.

**if-else statement:** Allows a program to choose between two possible actions.

**else-if ladder:** Allows a program to check several conditions and select the appropriate result.

**switch statement:** Allows a program to select an action from several alternatives based on the value of an expression.

I also learned about relational operators such as greater than, less than, equal to and not equal to. Logical operators such as AND (&&), OR (||) and NOT (!) are used to combine or reverse conditions.

#### 4.2 Grading System

The grading system used in this practical was:

| Marks | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

#### 4.3 Source Code

The following C program was used to classify marks into grades and determine the pass or fail status.

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

#### 4.4 Explanation of the Program

The program begins by including the standard input and output library using `#include <stdio.h>`. This allows the use of functions such as printf() and scanf().

The integer variable `mark` stores the marks entered by the user.

The printf() function displays a message asking the user to enter marks, while scanf() receives the input.

The if-else-if ladder checks the entered mark against the grading ranges. A mark of 80 or above receives grade A, while lower marks are checked against the remaining conditions.

The second if-else statement determines the pass or fail status. A mark of 50 or above results in a Pass, while a mark below 50 results in a Fail.

Finally, `return 0;` indicates that the program has completed successfully.

---

### 5. TESTING AND TROUBLESHOOTING

#### 5.1 Program Testing

The program was prepared for testing using different marks to check whether the grading conditions worked correctly.

The test cases included:

| Test mark | Expected grade | Expected status |
|---|---|---|
| 0 | F | Fail |
| 40 | F | Fail |
| 50 | D | Pass |
| 72 | B | Pass |
| 79 | B | Pass |
| 80 | A | Pass |
| 85 | A | Pass |
| 100 | A | Pass |

The test cases cover different grading ranges, including important boundary values.

#### 5.2 Testing Evidence

The project folder contains the following test evidence image files:

- input=0.png
- input=40.png
- input=50.png
- input=72.png
- input=79.png
- input=80.png
- input=85.png
- input=100.png
- pull reques.png
- files-github.png
- source-code-codeblocks.png

These images should be inserted into the report where appropriate to demonstrate the actual program executions.

#### 5.3 Troubleshooting

One important issue I considered during the practical was the arrangement of conditions in the else-if ladder.

The conditions must be checked from the highest mark to the lowest mark. This prevents a high mark from being classified under an incorrect lower grade.

I also paid attention to the use of comparison operators and the address operator in scanf() so that the entered mark could be stored correctly.

An improvement that can be made to the program is adding input validation to reject marks below zero, above 100 and non-numeric values.

---

### 6. GITHUB WORKFLOW

GitHub was used to manage and submit my Laboratory 02 practical work.

I used my personal GitHub account to work on a fork of the official Kiotolabs repository.

**GitHub Username:** mwendwamakete-source

**Personal Repository:**

https://github.com/mwendwamakete-source/kioto-ics2175-lab02

**Official Repository:**

https://github.com/Kiotolabs/kioto-ics2175-lab02

**Working Branch:**

student/ENB211-0027/2025/lab02

**Pull Request Number:** #4

**Pull Request URL:**

https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/4

**Pull Request Status:** Open

#### 6.1 Version Control Activities

The following activities were involved in submitting the practical:

1. Accessing the official Kiotolabs Laboratory 02 repository.
2. Creating a personal fork of the repository.
3. Cloning the personal repository.
4. Creating an individual working branch.
5. Completing the programming exercise and preparing testing evidence.
6. Committing and pushing the changes to GitHub.
7. Opening a pull request to the original Kiotolabs repository.

The pull request was submitted from my personal fork to the main branch of the original Kiotolabs repository.

#### 6.2 Pull Request Information

The pull request was created with the title:

**Lab 02 submission — ENB211-0027/2025updated files**

The pull request is number 4 and is currently open for review.

It was submitted to:

`Kiotolabs/kioto-ics2175-lab02:main`

The working branch is:

`student/ENB211-0027/2025/lab02`

The GitHub pull request page shows one commit associated with the submission.

The pull request allows the lecturer to review the submitted work and provide feedback.

---

### 7. REFLECTION

This practical helped me improve my understanding of decision-making in C programming.

I learned how a program can use conditions to make decisions and produce different results depending on the values entered by the user.

One of the most important concepts I learned was the use of an else-if ladder to classify marks into different grades. I also understood why the order of conditions matters when checking different ranges.

Another useful experience was learning how GitHub repositories, branches and pull requests are used to manage programming projects and submit work for review.

The practical also helped me appreciate the importance of testing programs with different values, especially boundary values.

In future programming exercises, I would improve my programs by including stronger input validation and testing more possible situations before submission.

---

### 8. CONCLUSION

The Laboratory 02 practical provided useful experience in selection and decision-making using the C programming language.

I learned how to use relational operators, logical operators and conditional statements to control the flow of a program.

The grading exercise demonstrated how a program can evaluate marks and automatically determine a student's grade and pass or fail status.

I also gained experience in using Code::Blocks to develop and test programs and GitHub to manage and submit my work.

Overall, the practical strengthened my understanding of basic C programming and improved my confidence in developing, testing and submitting programming projects.

---

## 9. APPENDIX: SCREENSHOTS AND EVIDENCE

The following screenshots provide evidence of the work completed during Laboratory 02. They are saved in the `report/screenshots/` folder of my project repository.

**Figure 1: Code::Blocks Source Code**

`report/screenshots/source-code-codeblocks.png`

**Figure 2: Program Output – Mark 85**

`report/screenshots/input=85.png`

**Figure 3: Program Output – Mark 72**

`report/screenshots/input=72.png`

**Figure 4: Program Output – Mark 40**

`report/screenshots/input=40.png`

**Figure 5: Boundary Testing Evidence**

- `report/screenshots/input=0.png`
- `report/screenshots/input=50.png`
- `report/screenshots/input=79.png`
- `report/screenshots/input=80.png`
- `report/screenshots/input=100.png`

**Figure 6: GitHub Project Files**

`report/screenshots/files-github.png`

**Figure 7: GitHub Pull Request**

`report/screenshots/pull request.png`

**Live Pull Request:**

https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/4

**Personal Repository:**

https://github.com/mwendwamakete-source/kioto-ics2175-lab02

---

**END OF REPORT**

ICS 2175 – Introduction to Computer Programming

Laboratory 02: Selection and Decision-Making

Student: BRIYAN MWENDWA MAKETE