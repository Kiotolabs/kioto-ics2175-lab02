# ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING
## LABORATORY 02 REPORT
### LAB 2: SELECTION AND DECISION-MAKING

**1. Cover Information**

- **Student Name:** WINNY AKINYI OCHIENG
- **Registration Number:** ENB211-0121/2025
- **Programme:** Agricultural and Biosystems Engineering
- **Institution:** Jomo Kenyatta University of Agriculture and Technology (JKUAT)
- **Unit:** ICS 2175 – Introduction to Computer Programming
- **Laboratory Number:** 02
- **Date:** 22 November 2026


## 2. Objective

The main objective of this laboratory exercise was to understand how selection and decision-making statements are used in C programming.

The specific objectives were:

1. To learn how to use `if`, `if-else` and `switch` statements.
2. To understand how a program makes decisions based on user input.
3. To write and execute a C program using selection statements.
4. To test a program using different input values, including boundary values.
5. To identify and correct errors during program compilation and execution.

## 3. Environment and Setup

The laboratory exercise was carried out using a laptop running Windows 11. I used Code::Blocks as the Integrated Development Environment (IDE) to write, edit and execute my C program.

I configured Code::Blocks to use the GNU GCC Compiler. The compiler installation directory was set to `C:\Program Files\CodeBlocks\MinGW`. The C compiler executable was `gcc.exe`, while the debugger was configured as GDB/CDB debugger.

**Software and tools used:**

- Operating System: Windows 11
- IDE: Code::Blocks
- Selected Compiler: GNU GCC Compiler
- C Compiler: gcc.exe
- Compiler Directory: `C:\Program Files\CodeBlocks\MinGW`
- Debugger: GDB/CDB debugger

After configuring the compiler, I used Code::Blocks to build and run my C program.


## 4. Exercise — Selection

### 4.1 Source Code

The following C program accepts a student's mark and assigns a grade based on the mark obtained. It also displays whether the student has passed or failed.

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

1. `#include <stdio.h>` allows the program to use input and output functions such as `printf()` and `scanf()`.

2. `int main(void)` is the main function where program execution begins.

3. `int mark;` declares an integer variable to store the student's mark.

4. `printf()` displays a message asking the user to enter a mark, while `scanf()` reads the value entered.

5. The `if-else if-else` statements compare the mark with different conditions and assign a grade:
   - 80–100: Grade A
   - 70–79: Grade B
   - 60–69: Grade C
   - 50–59: Grade D
   - Below 50: Grade F

6. The second `if-else` statement checks whether the mark is at least 50. If it is, the status is Pass; otherwise, the status is Fail.

7. `return 0;` indicates that the program has completed successfully.

### 4.3 Sample Program Output

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

## 5. Testing and Troubleshooting

### 5.1 Program Testing

I tested my grading program using different marks to check whether it assigned the correct grades and pass/fail status.

The test cases included:

| Test mark | Expected grade | Expected status |
|---:|:---:|:---:|
| 0 | F | Fail |
| 40 | F | Fail |
| 50 | D | Pass |
| 72 | B | Pass |
| 79 | B | Pass |
| 80 | A | Pass |
| 85 | A | Pass |
| 100 | A | Pass |

These tests covered different grading ranges and boundary values. Screenshots were used to provide evidence of the program output.

### 5.2 Troubleshooting

During the setup process, I configured the GNU GCC Compiler in Code::Blocks. I checked that the compiler installation directory pointed to the MinGW folder:

`C:\Program Files\CodeBlocks\MinGW`

After configuring the compiler, I successfully built and ran the C program.

### 5.3 Input Validation

The current program does not yet reject marks below 0 or above 100. Adding input validation would improve the program by ensuring that users enter marks within the accepted range.



## 6. GitHub Workflow

I used GitHub to store and manage my Laboratory 02 programming files. I started by forking the official Kiotolabs repository to my GitHub account. I then worked on my own fork and created a separate branch for the laboratory submission.

**Repository details:**

- **Official Repository:** https://github.com/Kiotolabs/kioto-ics2175-lab02
- **My Fork:** https://github.com/akinyiochieng2006-bot/kioto-ics2175-lab02
- **Branch Name:** `student/ENB211-0121/2025/lab02`
- **Pull Request:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/21

I added my programming files and report to the repository and pushed my changes to my individual branch. I then opened a pull request to the official Kiotolabs repository, targeting the `main` branch.

The pull request allows the submitted work to be reviewed and checked before it is accepted into the official repository.


## 7. Reflection

Through this laboratory exercise, I learned how selection statements are used in C programming to make decisions based on conditions. I gained practical experience using `if`, `else if` and `else` statements to assign grades and determine whether a student has passed or failed.

One of the challenges I experienced was configuring the GCC compiler in Code::Blocks. I managed to configure the compiler by selecting the correct MinGW installation directory.

I also learned the importance of testing a program with different input values, especially boundary values, to check whether it produces the expected results.

If I were to do this exercise again, I would improve my program by adding input validation to prevent users from entering marks outside the accepted range. I would also test more possible inputs before submitting my work.



