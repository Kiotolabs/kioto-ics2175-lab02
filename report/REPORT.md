
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

## 2. OBJECTIVE

The main objective of this practical was to understand and apply selection and decision-making statements in C programming.

The specific objectives were:

1. To understand and use relational and logical operators in writing conditions.
2. To implement `if`, `if-else` and `else-if` statements.
3. To use conditional statements to classify students' marks into different grades.
4. To determine whether a student has passed or failed based on their marks.
5. To use the `switch` statement to display descriptions of different grades.
6. To learn how to test and submit C programs using Git and GitHub.

## 3. ENVIRONMENT AND SETUP

The practical was carried out using a Windows computer.

The following tools were used:

1. **Operating System:** Windows 11.
2. **Code Editor:** Visual Studio Code.
3. **Programming Language:** C.
4. **Compiler:** GCC version 14.2.0.
5. **Compiler Toolchain:** MinGW-w64.
6. **Version Control:** Git and GitHub.
7. **GitHub Desktop:** Used for managing the repository and submitting the practical work.

The C programs were written and compiled using the GCC compiler. The programs were tested through the terminal to check whether they produced the correct grades and pass/fail results.

## 4. EXERCISE – SELECTION AND DECISION-MAKING

The exercise involved writing C programs that accept a student's mark and assign a grade according to the grading scale provided.

Two C source files were created: `main.c` and `improve.c`.

### 4.1 Program One: Original Source Code (`main.c`)

The first program used `if`, `else-if` and `else` statements to classify students' marks into different grades and determine whether a student had passed or failed.

**Source Code**

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

### 4.2 Explanation of Program One

1. `#include <stdio.h>` – Allows the program to use input and output functions.
2. `int main(void)` – Defines the main function where program execution begins.
3. `int mark;` – Declares an integer variable to store the student's mark.
4. `printf()` – Displays a message asking the user to enter a mark.
5. `scanf()` – Reads the mark entered by the user.
6. `if` and `else-if` – Check the mark and assign the correct grade.
7. `else` – Assigns grade F when the mark is below 50.
8. The second `if-else` statement determines whether the student has passed or failed.
9. `return 0;` – Ends the program successfully.

### 4.3 Program Two: Improved Source Code (`improve.c`)

The second program was an improved version of the first program. It included input validation to prevent invalid marks and used a `switch` statement to display descriptions of the different grades.

**Source Code**

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

### 4.4 Explanation of Program Two

1. `#include <stdio.h>` – Allows the program to use input and output functions.
2. `int mark;` – Declares a variable to store the student's mark.
3. `char grade;` – Declares a character variable to store the assigned grade.
4. `printf()` – Asks the user to enter a mark between 0 and 100.
5. `scanf()` – Reads the input entered by the user.
6. `if (scanf("%d", &mark) != 1)` – Checks whether the user entered a valid integer.
7. `if (mark < 0 || mark > 100)` – Checks whether the mark is outside the allowed range.
8. `if`, `else-if` and `else` – Assign the appropriate grade according to the mark.
9. `switch (grade)` – Displays a description corresponding to the assigned grade.
10. `break` – Prevents execution from continuing into the next case.
11. The final `if-else` statement determines whether the student has passed or failed.
12. `return 0;` – Ends the program successfully.

### 4.5 Program Output

The following outputs were obtained when testing the programs.

**Program One: Test 1 – Mark 85**

```text
Enter mark (0-100): 85
Grade: A
Status: Pass
```

**Program One: Test 2 – Mark 72**

```text
Enter mark (0-100): 72
Grade: B
Status: Pass
```

**Program One: Test 3 – Mark 40**

```text
Enter mark (0-100): 40
Grade: F
Status: Fail
```

**Program Two: Test 1 – Mark 100**

```text
Enter mark (0-100): 100
Grade: A
Excellent
Status: Pass
```

**Program Two: Test 2 – Mark 72**

```text
Enter mark (0-100): 72
Grade: B
Very Good
Status: Pass
```

**Program Two: Test 3 – Mark 40**

```text
Enter mark (0-100): 40
Grade: F
Fail
Status: Fail
```

### 4.6 Observation

The first program successfully classified marks into grades and displayed the appropriate pass or fail status.

The improved program performed the same grading task but included input validation and a `switch` statement to display additional descriptions for each grade.

## 5. TESTING AND TROUBLESHOOTING

### 5.1 Program One Testing (`main.c`)

The original program was tested using the following marks:

| Input Mark | Expected Grade | Expected Status |
|---:|:---:|:---:|
| 85 | A | Pass |
| 72 | B | Pass |
| 40 | F | Fail |

The results confirmed that the program correctly classified the marks.

### 5.2 Program Two Testing (`improve.c`)

The improved program was tested using different marks to confirm that it assigned the correct grades and displayed the appropriate descriptions and status.

| Input Mark | Grade | Description | Status |
|---:|:---:|---|---|
| 0 | F | Fail | Fail |
| 40 | F | Fail | Fail |
| 50 | D | Pass | Pass |
| 65 | C | Good | Pass |
| 72 | B | Very Good | Pass |
| 79 | B | Very Good | Pass |
| 80 | A | Excellent | Pass |
| 85 | A | Excellent | Pass |
| 100 | A | Excellent | Pass |

### 5.3 Input Validation Testing

The improved program was also tested using invalid inputs to confirm that it could detect incorrect entries.

| Input | Expected Output |
|---|---|
| 110 | Invalid mark! Enter 0-100. |
| -5 | Invalid mark! Enter 0-100. |
| hello | Invalid input! |

The program correctly rejected marks outside the range of 0 to 100 and displayed an error message when non-numeric input was entered.

### 5.4 Troubleshooting

During the practical, an error occurred in Visual Studio Code when it failed to detect the standard input/output header file, `stdio.h`.

The problem was caused by the compiler not being properly recognised through the system PATH.

To solve this problem, the MinGW compiler directory was added to the terminal PATH using the following command:

```powershell
$env:Path += ";C:\Program Files\CodeBlocks\MinGW\bin"
```

After this, GCC version 14.2.0 was successfully recognised. The programs were then compiled and tested through the terminal.

## 6. GITHUB WORKFLOW

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

## 7. REFLECTION

During this practical, I learned how to use selection and decision-making statements in C programming. I improved my understanding of relational operators and how `if`, `else-if` and `else` statements are used to control the flow of a program.

I also learned how to use the `switch` statement to display different messages depending on the grade assigned.

One of the challenges I experienced was configuring the GCC compiler in Visual Studio Code. I solved this problem by adding the MinGW compiler directory to the terminal PATH and confirming that GCC version 14.2.0 was recognised.

Another improvement I made was adding input validation to prevent the program from accepting marks outside the allowed range or non-numeric entries.

I also learned how to use GitHub branches, commits and pull requests when submitting programming assignments.

If I were to do this practical again, I would configure the compiler before starting the exercise and test my programs carefully with all the required inputs. This would help me identify errors earlier and complete the work more efficiently.

## 8. CONCLUSION

The laboratory practical helped me understand how selection and decision-making statements are used in C programming.

I learned how to use conditional statements to assign grades according to students' marks and determine whether they had passed or failed.

By creating two programs, I gained experience in using `if`, `else-if`, `else` and `switch` statements. I also learned how to validate user input and handle invalid entries.

In addition, I gained experience in writing, compiling and testing C programs, as well as using Git and GitHub to manage and submit my work.

Overall, the objectives of the practical were achieved, and the exercise improved my understanding and confidence in C programming.

---

# APPENDIX A: EVIDENCE AND SCREENSHOTS

The following screenshots provide evidence of the practical work completed during Laboratory 02. They are stored in the `report/screenshots` folder.

### Figure 1: Original Source Code (`main.c`)

- `sourcecode.png`
- `sourcecode part 2.png`

These screenshots show the original C program used to calculate grades and determine pass or fail status.

### Figure 2: Improved Source Code (`improve.c`)

- `improve-code-01.png`
- `improve-code-02.png`
- `improve-code-03.png`
- `improve.c-.png`

These screenshots show the improved program, including input validation, grade assignment and the switch statement.

### Figure 3: Original Program Execution

The original program outputs are shown in the available source code and execution evidence.

### Figure 4: Improved Program Execution and Testing

- `improve-output-03.png`
- `improve-output-o1.png`
- `input=0.png`
- `input=40.png`
- `input=50.png`
- `input=72.png`
- `input=79.png`
- `input=80.png`
- `input=85.png`
- `input=100.png`

These screenshots show the program outputs for different test marks.

Additional invalid input tests included 110, -5 and `hello`.

### Figure 5: GitHub Branch

- `branch.png`

This screenshot shows the branch created for the Laboratory 02 submission.

### Figure 6: GitHub Pull Request

- `pull-request.png`

This screenshot shows the pull request created to submit the laboratory work for review.

**Pull Request Link:**  
https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/11

### Figure 7: Submitted Files

- `sumitted-files.png`

This screenshot shows the files included in the Laboratory 02 submission.

---

**END OF REPORT**
