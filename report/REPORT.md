# KIOTO iLMs – COMPUTING LABORATORY

## ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING

# LABORATORY 02 REPORT

### SELECTION AND DECISION-MAKING

**Student Full Name:** Abednego Nayiya Jimba

**Registration Number:** ENB211-0046/2025

**Programme:** Agricultural and Biosystems Engineering

**Unit Code:** ICS 2175

**Unit Name:** Introduction to Computer Programming

**Laboratory Number:** Laboratory 02

**Laboratory Title:** Selection and Decision-Making

**Date Performed:** 21 November 2026

**GitHub Username:** abednego19

### 2.0 OBJECTIVE

The objective of this laboratory exercise was to understand and apply selection and decision-making statements in the C programming language. The exercise focused on using relational and logical operators, if, if-else, else-if ladder, and switch statements to control the flow of a program.

The practical task involved developing and testing a C program that accepts a student's mark, assigns the appropriate grade according to the given grading scale, and determines whether the student has passed or failed.

The exercise also aimed to develop skills in compiling, executing, testing, and debugging C programs, while practising the use of Git and GitHub for version control and collaborative software development.

## 3. ENVIRONMENT AND SETUP

The laboratory exercise was carried out using a Windows-based computer with the C programming environment installed.

### 3.1 Hardware and Software Environment

- **Computer:** Evolve III Masterpiece

- **Operating System:** Windows 10 (Build 19045.6466)

- **RAM:** 4 GB

- **IDE:** Code::Blocks 25.03

- **Compiler:** MinGW-W64 GCC 14.2.0

- **Programming Language:** C

### 3.2 Development Setup

The source code was written and saved in a file named `main.c` inside the laboratory project folder. The GCC compiler was used to compile the source code into an executable program.

The following commands were used in the Windows Command Prompt:

```bash

gcc main.c -o main.exe

main.exe

```

Initially, the system could not recognize the `gcc` command because the MinGW compiler directory was not included in the system PATH. This was temporarily corrected by adding the compiler's `bin` directory to the PATH in the Command Prompt session.

After correcting the PATH, the program compiled successfully and was executed for testing.

## 4. EXERCISE – SELECTION

### 4.1 Problem Description

The exercise involved writing a C program that accepts a student's mark between 0 and 100, determines the corresponding grade, and displays whether the student has passed or failed.

The program uses the following grading scale:

| Marks | Grade | Status |

|---|---|---|

| 80–100 | A | Pass |

| 70–79 | B | Pass |

| 60–69 | C | Pass |

| 50–59 | D | Pass |

| 0–49 | F | Fail |

### 4.2 Source Code

The following is the C source code used in the exercise:

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

### 4.3 Explanation of the Program

1. **Header file:** `#include <stdio.h>` provides the standard input and output functions used by the program.

2. **Main function:** `int main(void)` is the starting point of program execution.

3. **Variable declaration:** `int mark;` declares an integer variable to store the student's mark.

4. **Input statement:** `printf()` displays a prompt, while `scanf()` reads the mark entered by the user.

5. **If-else-if ladder:** The program compares the mark with the grading boundaries and assigns the appropriate grade.

6. **Pass/fail selection:** A separate `if-else` statement checks whether the mark is at least 50. If it is, the program displays Pass; otherwise, it displays Fail.

7. **Return statement:** `return 0;` indicates that the program has completed successfully.

### 4.4 Program Output

The program was executed using different marks to confirm that the selection statements produced the expected results.

**Test Case 1: Mark of 85**

```text

Enter mark (0-100): 85

Grade: A

Status: Pass

```

**Test Case 2: Mark of 72**

```text

Enter mark (0-100): 72

Grade: B

Status: Pass

```

**Test Case 3: Mark of 40**

```text

Enter mark (0-100): 40

Grade: F

Status: Fail

```

The results showed that the program correctly assigned grades and determined pass/fail status for the tested marks.

## 5. TESTING AND TROUBLESHOOTING

### 5.1 Program Testing

After writing the source code, the program was compiled and executed using the GCC compiler. Several test marks were entered to check whether the program assigned the correct grades and pass/fail statuses.

The following test cases were performed:

| Test Mark | Expected Grade | Expected Status | Actual Result |

|---:|---|---|---|

| 85 | A | Pass | Correct |

| 72 | B | Pass | Correct |

| 40 | F | Fail | Correct |

| 50 | D | Pass | Correct |

| 0 | F | Fail | Correct |

| 100 | A | Pass | Correct |

| 79 | B | Pass | Correct |

| 80 | A | Pass | Correct |

The program produced the expected results for all eight test cases.

### 5.2 Error Encountered

During compilation, an error occurred when the Windows Command Prompt failed to recognize the `gcc` command. The message displayed was:

```text

'gcc' is not recognized as an internal or external command,

operable program or batch file.

```

### 5.3 Troubleshooting and Solution

The error occurred because the MinGW compiler's `bin` directory was not included in the PATH environment variable for the Command Prompt session.

The problem was temporarily corrected by executing the following command:

```cmd

set PATH=%PATH%;C:\Program Files\CodeBlocks\MinGW\bin

```

After updating the PATH, the compiler version was checked using:

```cmd

gcc --version

```

The compiler was then able to compile the program successfully using:

```cmd

gcc main.c -o main.exe

```

The executable was launched using:

```cmd

main.exe

```

### 5.4 Testing Outcome

The program compiled successfully and produced the expected grades and pass/fail results for the eight marks tested. This confirmed that the selection statements worked correctly for the tested values.

## 6. GITHUB WORKFLOW

### 6.1 Repository Setup

The official laboratory repository was `Kiotolabs/kioto-ics2175-lab02`. A personal fork was used to work on the assignment without making changes directly to the lecturer's repository.

The project was cloned to the following local directory:

```text

C:\Users\Abednego\OneDrive\Documents\GitHub\kioto-ics2175-lab02

```

**GitHub Username:** abednego19

Personal Fork Repository URL: https://github.com/abednego19/kioto-ics2175-lab02

### 6.2 Branch Creation

A separate branch was required for the laboratory work. The required naming format was:

```text

student/ENB211-0046/2025/lab02

```

Working on a separate branch helped keep the laboratory changes independent of the main branch.

### 6.3 Commits and Pushing Changes

Git was used to track changes made to the laboratory files. Meaningful commits were required to record the development process. After committing the changes, the branch was pushed to the personal GitHub repository.

**Commit Summary:** Five commits were pushed to the personal fork as part of the laboratory submission. The individual commit messages can be viewed on the pull request's Commits tab.

### 6.4 Pull Request

After pushing the branch, a pull request was created from the personal fork to the lecturer's repository.

The pull request was expected to use the following direction:

- **Base repository:** `Kiotolabs/kioto-ics2175-lab02`

- **Base branch:** `main`

- **Head repository:** Personal fork under `abednego19`

- **Head branch:** `student/ENB211-0046/2025/lab02`

**Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/12

The pull request was left open for the lecturer to review. It was not merged or closed.

## 7. REFLECTION

This laboratory exercise helped me understand how selection and decision-making statements are used in C programming to control the flow of a program. I gained practical experience using `if`, `if-else`, and `else-if` ladder statements to evaluate conditions and produce different outputs depending on the marks entered.

I also learned the importance of testing a program with different values, including boundary values such as 0, 50, 79, 80, and 100, to confirm that the grading conditions work correctly.

One challenge I encountered was that the GCC compiler was not initially recognized by the Windows Command Prompt. I learned how to troubleshoot this problem by adding the MinGW compiler directory to the PATH for the current Command Prompt session.

The exercise also introduced me to the importance of Git and GitHub in managing source code, tracking changes, and submitting programming work for review. Overall, the practical improved my confidence in writing, compiling, executing, and testing C programs.

## 8. CONCLUSION

The laboratory exercise on Selection and Decision-Making provided practical experience in using conditional statements in the C programming language. The program successfully used an `if-else-if` ladder to assign grades and an `if-else` statement to determine whether a student had passed or failed.

Testing with different marks confirmed that the program produced the expected results for all the test cases performed. The compilation problem was also resolved by temporarily updating the PATH environment variable to enable GCC to work correctly.

In conclusion, the exercise strengthened my understanding of selection statements, program testing, troubleshooting, and basic version control using Git and GitHub.
9. EVIDENCE AND SCREENSHOTS
The following screenshots are included in the report/screenshots/ folder to provide evidence of the laboratory work and GitHub submission.
1. all_inputs.png – Screenshot showing the program tested with different input values.
2. branch.png – Screenshot showing the laboratory Git branch.
3. source_cide.png – Screenshot showing the program source code.
4. submitted-files.png – Screenshot showing the submitted laboratory files and project structure.
The screenshots are stored in the repository under:
report/
└── screenshots/
    ├── all_inputs.png
    ├── branch.png
    ├── source_code.png
    └── submitted-files.png
These images provide supporting evidence of the program implementation, testing, branch setup, and submission files.

