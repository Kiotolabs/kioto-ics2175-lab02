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

### 4.1 Original Source Code (main.c)

The first program was designed to accept a student's mark, assign a grade and determine whether the student had passed or failed.

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

### 4.2 Explanation of the Original Program

- `#include <stdio.h>` allows the program to use input and output functions.
- `int mark;` declares a variable to store the student's mark.
- `printf()` displays a message requesting the mark.
- `scanf()` reads the mark entered by the user.
- The `if-else if-else` statements assign grades according to the mark.
- The second `if-else` statement determines whether the student has passed or failed.
- `return 0;` indicates successful program execution.

### 4.3 Improved Source Code (improved.c)

After testing the original program, I developed an improved version. The improved program includes input validation and a `switch` statement.

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

### 4.4 Explanation of the Improvements

The improved program introduced the following features:

1. **Input validation:** Checks whether the user enters a valid number.
2. **Range checking:** Rejects marks below 0 and above 100.
3. **Switch statement:** Displays a remark based on the assigned grade.
4. **Break statement:** Prevents execution from continuing into another switch case.
5. **Pass/fail decision:** Determines the student's final status.

### 4.5 Sample Output of the Improved Program

**Test 1: Mark 85**

```text
Enter mark (0-100): 85
Grade: A
Excellent
Status: Pass
```

**Test 2: Mark 72**

```text
Enter mark (0-100): 72
Grade: B
Very Good
Status: Pass
```

**Test 3: Mark 40**

```text
Enter mark (0-100): 40
Grade: F
Fail
Status: Fail
```

**Test 4: Invalid mark 110**

```text
Enter mark (0-100): 110
Invalid mark! Enter 0-100.
```

---

## 5. Testing and Troubleshooting

### 5.1 Testing the Original Program

I tested the original program using different marks to check whether it assigned the correct grades and pass/fail statuses.

The test cases included 0, 40, 50, 72, 79, 80, 85 and 100. The program produced the expected grades and statuses for these inputs.

### 5.2 Testing the Improved Program

I used Windows PowerShell to compile and execute the improved program. I tested nine different values in one terminal session.

| Input | Expected result |
|---:|---|
| 85 | Grade A – Pass |
| 72 | Grade B – Pass |
| 40 | Grade F – Fail |
| 50 | Grade D – Pass |
| 80 | Grade A – Pass |
| 0 | Grade F – Fail |
| 100 | Grade A – Pass |
| 110 | Invalid mark |
| -5 | Invalid mark |

The program correctly handled all nine test cases.

### 5.3 Troubleshooting

Initially, PowerShell could not recognise the `gcc` command because the compiler directory was not available through the PowerShell PATH.

I corrected this by using the full compiler path:

`C:\msys64\ucrt64\bin\gcc.exe`

After this correction, the program compiled successfully and all the test cases ran as expected.

### 5.4 Improvements Made

The original program did not check for invalid marks or non-numeric input. I improved it by introducing input validation and a `switch` statement.

This made the program more reliable and helped me understand the use of different selection statements in C programming.

## 6. GitHub Workflow

I used GitHub to store and manage my Laboratory 02 programming files. I started by forking the official Kiotolabs repository to my GitHub account. I then worked on my own fork and created a separate branch for the laboratory submission.

**Repository details:**

- **Official Repository:** https://github.com/Kiotolabs/kioto-ics2175-lab02
- **My Fork:** https://github.com/akinyiochieng2006-bot/kioto-ics2175-lab02
- **Branch Name:** `student/ENB211-0121/2025/lab02`
- **Pull Request:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/21

I added my programming files and report to the repository and pushed my changes to my individual branch. I then opened a pull request to the official Kiotolabs repository, targeting the `main` branch.

The pull request allows the submitted work to be reviewed and checked before it is accepted into the official repository.

## 7. Screenshot Evidence

The following nine screenshots are included in the `report/screenshots` folder as evidence of the work completed during Laboratory 02.

1. `source-code01.png` – Original C source code.
2. `source-code02.png` – Improved C source code.
3. `input=0.png` – Program output for mark 0.
4. `input=40.png` – Program output for mark 40.
5. `input=50.png` – Program output for mark 50.
6. `input=72.png` – Program output for mark 72.
7. `input=79.png` – Program output for mark 79.
8. `input=80.png` – Program output for mark 80.
9. `pull-request.png` – GitHub pull request submission.
10  `submitted files.png` -github files 

Additional test screenshots for marks 85 and 100, where available, are also included in the folder.

## 8. Submitted Files

The laboratory submission contains:

- `main.c` – Original selection program.
- `improved.c` – Improved program with input validation and a switch statement.
- `ICS_2175_Laboratory_ENB211-0121/2025_02_Report.docx` – Laboratory report.
- `report/screenshots/` – Folder containing screenshot evidence.

## 9. Reflection

Through this laboratory exercise, I learned how selection statements are used in C programming to make decisions based on conditions. I gained practical experience using `if`, `else if`, and `else` statements to assign grades and determine whether a student has passed or failed.

One of the challenges I experienced was configuring the GCC compiler in Code::Blocks. I managed to configure the compiler by selecting the correct compiler installation directory.

I also learned the importance of testing a program with different input values, especially boundary values, to check whether it produces the expected results.

The improved program helped me understand input validation and the use of a `switch` statement. If I were to repeat this exercise, I would plan my tests earlier and explore more possible input cases.

## 10. Conclusion

In conclusion, this laboratory exercise helped me understand the use of selection and decision-making statements in C programming. I successfully wrote, compiled and executed a grading program using `if`, `else if`, `else`, and `switch` statements.

I also gained practical experience in configuring the compiler, testing programs with different marks and using GitHub to manage and submit my work.

The exercise achieved its main objectives by improving my understanding of basic C programming and decision-making.