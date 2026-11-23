# ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING
# LABORATORY 02 REPORT

## Selection and Decision-Making

### 1. Cover Information

**Student Name:** Valentine Mutiso

**Registration Number:** ENB211-0026/2024

**Programme:** [Enter your programme]

**Unit:** ICS 2175 – Introduction to Computer Programming

**Laboratory Number:** 02

**Laboratory Title:** Selection and Decision-Making

**Date Performed:** [Enter the actual date]

### 2. Objective

The objective of this laboratory practical was to develop my understanding of selection and decision-making in the C programming language.

The practical aimed to help me understand how to use relational and logical operators, if-else statements, else-if ladders, and switch statements to make decisions in a program.

I also aimed to learn how to validate user input, handle boundary values, test a C program, and submit my work using Git and GitHub.

### 3. Environment and Setup

The practical was carried out using the following tools:

- Operating System: Windows [Confirm version]
- Code Editor: [Enter the editor actually used]
- Compiler: GCC
- GCC Version: [Enter version if known]
- Programming Language: C
- Version Control System: Git
- Online Repository Platform: GitHub
- Terminal: Windows PowerShell

The C program was written, compiled, and tested using GCC. Git and GitHub were used to manage the source code, track changes, and submit the completed practical through a pull request.

### 4. Exercise – Selection and Decision-Making

#### 4.1 Introduction

In this exercise, I developed a C program that accepts a student's mark and assigns a grade according to the grading scale provided in the laboratory instructions.

The program also determines whether the student has passed or failed and displays a performance message based on the assigned grade.

The grading scale used was:

| Mark Range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

#### 4.2 Final Source Code

```c
#include <stdio.h>

int main(void)
{
    int mark;
    char grade;

    printf("Enter your mark (0-100): ");

    if (scanf("%d", &mark) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    if (mark < 0 || mark > 100) {
        printf("Invalid mark! Enter a mark between 0 and 100.\n");
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

    if (mark >= 50) {
        printf("Status: Pass\n");
    } else {
        printf("Status: Fail\n");
    }

    switch (grade) {
        case 'A':
            printf("Excellent performance!\n");
            break;
        case 'B':
            printf("Very good performance!\n");
            break;
        case 'C':
            printf("Good performance!\n");
            break;
        case 'D':
            printf("You have passed.\n");
            break;
        case 'F':
            printf("You need to improve.\n");
            break;
    }

    return 0;
}
```

#### 4.3 Explanation of the Program

The program begins by including the standard input and output library, `stdio.h`, which allows the use of functions such as `printf()` and `scanf()`.

The variables `mark` and `grade` are declared to store the student's mark and the grade assigned by the program.

The `scanf()` function reads the mark entered by the user. The condition `scanf("%d", &mark) != 1` checks whether the input is a valid integer. If the input is not numeric, the program displays an error message and terminates.

The condition `mark < 0 || mark > 100` checks whether the mark is outside the permitted range. The logical OR operator ensures that the program rejects marks below zero or above one hundred.

The else-if ladder assigns grades according to the grading scale. The program checks the highest grade first and continues to lower grades until a matching condition is found.

The if-else statement checks whether the mark is at least 50. If the condition is true, the program displays a pass status; otherwise, it displays a fail status.

The switch statement uses the assigned grade to display an appropriate performance message. Each case contains a `break` statement to prevent execution from continuing into the next case.

Finally, `return 0;` indicates that the program has completed successfully.

#### 4.4 Program Output and Test Cases

The following test cases were used to check the program's behaviour.

**Test Case 1: Mark of 100**

```text
Enter your mark (0-100): 100
Grade: A
Status: Pass
Excellent performance!
```

**Test Case 2: Mark of 72**

```text
Enter your mark (0-100): 72
Grade: B
Status: Pass
Very good performance!
```

**Test Case 3: Mark of 55**

```text
Enter your mark (0-100): 55
Grade: D
Status: Pass
You have passed.
```

**Test Case 4: Mark of 40**

```text
Enter your mark (0-100): 40
Grade: F
Status: Fail
You need to improve.
```

**Test Case 5: Mark of 0**

```text
Enter your mark (0-100): 0
Grade: F
Status: Fail
You need to improve.
```

### 5. Testing and Troubleshooting

#### 5.1 Testing

The program was tested using different marks to confirm that the grading conditions and pass/fail decisions worked correctly.

The tests included marks of 100, 72, 55, 40, and 0.

Additional boundary tests included marks of 50, 60, 70, 80, and 100 to verify that the program assigned the correct grade at the beginning of each grading range.

The program was also tested with invalid inputs, including -5, 110, and non-numeric input such as `hello`.

The results were checked against the grading scale provided in the laboratory instructions.

#### 5.2 Troubleshooting

During testing, I checked how the program handled marks outside the permitted range and non-numeric input.

The input validation statements ensure that the program does not continue processing an invalid mark.

The program displays an error message and terminates when the user enters a mark below zero, above 100, or a non-numeric value.

This helped me understand the importance of validating user input before performing calculations or making decisions.

### 6. GitHub Workflow and Submission

GitHub was used to manage and submit the completed laboratory practical.

The official Kiotolabs Lab 02 repository was used as the upstream repository. The practical work was submitted through my working branch and a pull request.

**Personal Repository:**
https://github.com/valentinemutiso-prog/kioto-ics2175-lab02

**Official Repository:**
https://github.com/Kiotolabs/kioto-ics2175-lab02

**Working Branch:**
`student/ENB211-0026/2024/lab02`

**Pull Request Number:** 32

**Pull Request URL:**
https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/32

**Commits:** 29

**Files Changed:** 19

The pull request was created to submit my completed practical for review by the lecturer. It targets the `main` branch of the official Kiotolabs repository.

At the time of preparing this report, Pull Request #32 was open and awaiting review. It had not yet been merged.

### 7. Evidence and Screenshots

The following screenshots are stored in the `report/screenshots/` folder of my laboratory repository.

**Source code evidence**
- `code-main-c-01.png`
- `code-main-c-02.png`
- `improve-c-01.png`
- `improve-c-02.png`
- `improve-c-03.png`

**Program output evidence**
- `improved-output01.png`
- `improved-output02.png`
- `input=0.png`
- `input=40.png`
- `input=50.png`
- `input=72.png`
- `input=79.png`
- `input=80.png`
- `input=85.png`
- `input=100.png`

**GitHub submission evidence**
- `fork.png`
- `branch.png`
- `pull-request.png`

These screenshots provide evidence of the source code, program testing, repository setup, working branch, and pull request submission.
### 8. Reflection

Through this practical, I learned how to use selection statements in C programming to make decisions based on user input.

I improved my understanding of relational and logical operators, if-else statements, else-if ladders, and switch statements.

I also learned how to validate input and test boundary values to ensure that a program behaves correctly under different conditions.

One of the difficulties I encountered was ensuring that the program handled invalid input correctly. I learned that input validation is important because a program should not continue processing data that is outside the permitted range.

Another important lesson was learning how to use GitHub to manage source code, create a working branch, and submit work through a pull request.

If I were to repeat this practical, I would spend more time testing the program with different inputs and checking the source code before committing and submitting my work.

### 9. Conclusion

The objectives of this laboratory practical were achieved.

I successfully developed a C program that accepts a student's mark, validates the input, assigns a grade, determines the pass or fail status, and displays a performance message.

The practical improved my understanding of selection and decision-making in C programming and helped me develop skills in testing, troubleshooting, and using GitHub for source code management and submission.

The completed practical was submitted through Pull Request #32 to the official Kiotolabs Lab 02 repository for review.