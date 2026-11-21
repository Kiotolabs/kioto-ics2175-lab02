# KIOTO iLMs – COMPUTING LABORATORY

## LABORATORY 02: SELECTION AND DECISION-MAKING

**Student Name:** MARGRET AKINYI  
**Registration Number:** ENB211-0032/2025  
**Programme:** Bachelor of Science in Agricultural and Biosystems Engineering  
**Programming Language:** C  
**Unit Code:** ICS 2175  
**Laboratory Number:** 02  
**Date Performed:** 21 November 2026

---

## 2. Objective

The main objective of this practical was to understand and apply selection and decision-making statements in C programming.

The specific objectives were:

1. To understand and use relational and logical operators in writing conditions.
2. To implement `if`, `if-else` and `else-if` statements.
3. To use conditional statements to classify students' marks into different grades.
4. To determine whether a student has passed or failed based on their marks.
5. To learn how to test and submit C programs using Git and GitHub.

## 3. Environment and Setup

The practical was carried out using a Windows computer.

The following tools were used:

1. **Operating System:** Windows 11.
2. **Code Editor:** Visual Studio Code.
3. **Programming Language:** C.
4. **Compiler:** GCC version 14.2.0.
5. **Compiler Toolchain:** MinGW-w64.
6. **Version Control:** Git and GitHub.
7. **GitHub Desktop:** Used for managing the repository and submitting the practical work.

The C program was written and compiled using the GCC compiler. The program was tested through the terminal to check whether it produced the correct grades and pass/fail results.

## 4. Exercise — Selection and Decision-Making

The exercise involved writing a C program that accepts a student's mark and assigns a grade according to the grading scale provided.

### 4.1 Source Code

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

### 4.2 Explanation of the Program

1. `#include <stdio.h>` – Allows the program to use input and output functions.
2. `int main(void)` – Defines the main function where program execution begins.
3. `int mark;` – Declares an integer variable to store the student's mark.
4. `printf()` – Displays a message asking the user to enter a mark.
5. `scanf()` – Reads the mark entered by the user.
6. `if` and `else-if` – Check the mark and assign the correct grade.
7. `else` – Assigns grade F when the mark is below 50.
8. The second `if-else` statement determines whether the student has passed or failed.
9. `return 0;` – Ends the program successfully.

### 4.3 Program Output

**Test 1: When the mark is 85**

```text
Enter mark (0-100): 85
Grade: A
Status: Pass
```

**Test 2: When the mark is 72**

```text
Enter mark (0-100): 72
Grade: B
Status: Pass
```

**Test 3: When the mark is 40**

```text
Enter mark (0-100): 40
Grade: F
Status: Fail
```

### 4.4 Observation

The program classified the marks into the correct grades and displayed the appropriate pass or fail status based on the grading scale.

## 5. Testing and Troubleshooting

### 5.1 Program Testing

The program was tested using the following input marks provided in the laboratory instructions: 85, 72, 40, 50, 80, 0, 100 and 79.

The aim was to confirm that the program correctly assigned grades and displayed the pass or fail status.

| Input Mark | Expected Grade | Expected Status |
|---:|:---:|:---:|
| 85 | A | Pass |
| 72 | B | Pass |
| 40 | F | Fail |
| 50 | D | Pass |
| 80 | A | Pass |
| 0 | F | Fail |
| 100 | A | Pass |
| 79 | B | Pass |

### 5.2 Troubleshooting

During the practical, an error occurred in Visual Studio Code when it failed to detect the standard input/output header file, `stdio.h`.

The problem was caused by the compiler not being properly recognised through the system PATH.

To solve this problem, the MinGW compiler directory was added to the terminal PATH using the following command:

```powershell
$env:Path += ";C:\Program Files\CodeBlocks\MinGW\bin"
```

After this, GCC version 14.2.0 was successfully recognised. This allowed the program to be compiled using the GCC compiler.

## 6. GitHub Workflow

I forked the official Kiotolabs Laboratory 02 repository into my personal GitHub account and created an individual working branch.

I completed the laboratory work and made three commits to record my progress. I then pushed the branch to my GitHub repository and created a pull request to the original Kiotolabs repository for review.

**GitHub Username:** margiee-2o6

**Repository URL:**  
https://github.com/margiee-2o6/kioto-ics2175-lab02

**Branch Name:**  
`student/ENB211-0032/2025/lab02`

**Number of Commits:** 3

**Pull Request URL:**  
https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/11

**Pull Request Number:** #11

**Status:** Open – awaiting review.

## 7. Reflection

During this practical, I learned how to use selection and decision-making statements in C programming. I improved my understanding of relational operators and how `if`, `else-if` and `else` statements are used to control the flow of a program.

One of the challenges I experienced was configuring the GCC compiler in Visual Studio Code. I solved this problem by adding the MinGW compiler directory to the terminal PATH and confirming that GCC version 14.2.0 was recognised.

I also learned how to use GitHub branches, commits and pull requests when submitting programming assignments.

If I were to do this practical again, I would configure the compiler before starting the exercise and test my program carefully with all the required inputs. This would help me identify errors earlier and complete the work more efficiently.

## 8. Conclusion

The laboratory practical helped me understand how selection and decision-making statements are used in C programming.

I learned how to use conditional statements to assign grades according to students' marks and determine whether they had passed or failed.

I also gained experience in writing, compiling and testing C programs, as well as using Git and GitHub to manage and submit my work.

Overall, the objectives of the practical were achieved, and the exercise improved my understanding and confidence in C programming.

---

# APPENDIX A: EVIDENCE AND SCREENSHOTS

The following screenshots provide evidence of the practical work completed during Laboratory 02. They are stored in the `report/screenshots` folder.

### Figure 1: Source Code

- `sourcecode.png`
- `sourcecode part 2.png`

These screenshots show the C program written to calculate grades and determine pass or fail status.

### Figure 2: Program Execution and Testing

- `input=0.png`
- `input=40.png`
- `input=50.png`
- `input=72.png`
- `input=79.png`
- `input=80.png`
- `input=85.png`
- `input=100.png`

These screenshots show the program outputs for the different test marks.

### Figure 3: GitHub Branch

- `branch.png`

This screenshot shows the branch created for the Laboratory 02 submission.

### Figure 4: GitHub Pull Request

- `pull-request.png`

This screenshot shows the pull request created to submit the laboratory work for review.

**Pull Request Link:**  
https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/11


**END OF REPORT**