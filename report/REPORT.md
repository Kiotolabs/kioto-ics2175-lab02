# ICS 2175 – Laboratory 02 Report

## 1. Cover Information

- **Student Full Name:** Patricia Ndirangu
- **Registration Number:** ENB211-0045/2025
- **Programming Language:** C.
- **Unit:** ICS 2175 – Introduction to Computer Programming
- **Laboratory Number:** 02
- **Laboratory Topic:** Selection and Decision-Making
- **Date:** 22 NOVEMBER 2026


## 2. Objective

The objective of this laboratory was to understand and implement selection and decision-making statements in the C programming language.

The specific objectives were to:

- Understand and use `if`, `if-else` and `else-if` statements.
- Apply relational and logical operators in decision-making.
- Develop a grading program that classifies student marks into grades A, B, C, D and F.
- Determine whether a student has passed or failed based on their marks.
- Use a `switch` statement to display grade descriptions.
- Validate user input and handle invalid marks.
- Compile, run and test C programs using Code::Blocks and GCC.


## 3. Environment and Setup

The laboratory exercises were carried out using a Windows computer. Code::Blocks was used as the integrated development environment (IDE), while GCC was used to compile the C programs.

### Software and Tools

- **Operating System:** Windows (version to be confirmed).
- **IDE:** Code::Blocks (version to be confirmed).
- **Compiler:** GCC 14.2.0.
- **Programming Language:** C.
- **Build Tool:** MinGW.


## 3. Environment and Setup

The laboratory exercises were carried out using a Windows 11 computer. Code::Blocks was used as the integrated development environment (IDE), while GCC was used to compile the C programs.

### Software and Tools

- **Operating System:** Windows 11.
- **IDE:** Code::Blocks 25.03
- **Compiler:** GCC 14.2.0.
- **Programming Language:** C.
- **Build Tool:** MinGW.

## 4. Exercise – Selection

The exercise involved developing a student grading program using selection and decision-making statements in the C programming language.

### 4.1 Original Program (`main.c`)

The original program accepts a student's mark, assigns a grade using `if`, `else-if` and `else` statements, and determines whether the student has passed or failed.

#### Source Code

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

### 4.2 Improved Program (`improved.c`)

The improved program includes input validation to handle invalid entries and marks outside the accepted range of 0 to 100. It uses `if-else` statements to assign grades and a `switch` statement to display grade descriptions.

#### Source Code

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

### 4.3 Explanation of Key Statements

- **`if` statement:** Checks whether a condition is true before executing a block of code.
- **`else-if` statement:** Checks additional conditions when previous conditions are false. It is used to determine the student's grade.
- **`else` statement:** Executes when none of the preceding conditions is true.
- **Relational operators:** Operators such as `>=` and `<` compare marks against the grading ranges.
- **Logical OR (`||`):** Checks whether a mark is below 0 or above 100.
- **Input validation:** `scanf("%d", &mark) != 1` checks whether the user entered a valid integer.
- **`switch` statement:** Displays a description corresponding to the assigned grade.
- **`break` statement:** Prevents execution from continuing into the next switch case.
- **Pass/fail decision:** Checks whether the mark is at least 50 to determine the student's status.

### 4.4 Sample Program Output

The improved program was compiled successfully using GCC 14.2.0.

**Test Case 1: Mark of 85**

```text
Enter mark (0-100): 85
Grade: A
Excellent
Status: Pass
```

**Test Case 2: Mark of 40**

```text
Enter mark (0-100): 40
Grade: F
Fail
Status: Fail
```

**Test Case 3: Invalid mark of -5**

```text
Enter mark (0-100): -5
Invalid mark! Enter 0-100.
```

**Test Case 4: Invalid text input**

```text
Enter mark (0-100): hello
Invalid input!
```

The outputs demonstrate grade classification, pass/fail determination and input validation.


### 5.1 Testing Procedure and Test Cases

The program was tested using Code::Blocks by following these steps:

1. Select **Build → Build** or press **Ctrl + F9**.
2. Select **Build → Run** or press **Ctrl + F10**.
3. Test with the following inputs: `85, 72, 40, 50, 80, 0, 100, 79`.

### Checkpoint A

The original program was tested using the inputs specified in the laboratory instructions.

| Test Input | Expected Grade | Expected Status |
|---|---|---|
| 85 | A | Pass |
| 72 | B | Pass |
| 40 | F | Fail |
| 50 | D | Pass |
| 80 | A | Pass |
| 0 | F | Fail |
| 100 | A | Pass |
| 79 | B | Pass |

### Improved Program Test Results

The improved program was compiled successfully using GCC 14.2.0 and tested with the following inputs:

| Test Input | Observed Result |
|---|---|
| 85 | Grade A, Excellent, Pass |
| 40 | Grade F, Fail |
| 65 | Grade C, Good, Pass |
| 50 | Grade D, Pass |
| 0 | Grade F, Fail |
| 100 | Grade A, Excellent, Pass |
| -5 | Invalid mark |
| 110 | Invalid mark |
| hello | Invalid input |


## 6. GitHub Workflow

Git and GitHub were used to manage the laboratory source code and submit the completed work.

### 6.1 Repository Information

- **GitHub Username:** `ndirangupatricia6-tech`
- **Repository URL:** https://github.com/ndirangupatricia6-tech/kioto-ics2175-lab02
- **Branch Name:** `student/ENB211-0045/2025/lab02`
- **Original Repository:** https://github.com/Kiotolabs/kioto-ics2175-lab02

### 6.2 Commit Summary

A total of 13 commits were included in the pull request. The commits recorded the progress and changes made during the laboratory exercises.

### 6.3 Pull Request

The completed work was prepared for submission to the original Kiotolabs repository through a pull request.

- **Pull Request Number:** #23
- **Pull Request Title:** Lab 02 submission — enb211-0045/2025
- **Target Repository:** `Kiotolabs/kioto-ics2175-lab02`
- **Target Branch:** `main`
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/23

The pull request was opened to submit the individual laboratory work for review.




## 7. Reflection

Through this laboratory, I learned how to use selection and decision-making statements in the C programming language.

I gained practical experience in:

- Using `if`, `else-if` and `else` statements to make decisions in a program.
- Applying relational and logical operators when comparing values.
- Developing a grading system that classifies marks and determines pass/fail status.
- Using a `switch` statement to display different grade descriptions.
- Validating user input and handling invalid marks.
- Compiling, running and testing C programs using Code::Blocks and GCC.
- Using Git and GitHub to manage source code and submit laboratory work.

One challenge was handling invalid user input and ensuring that marks outside the accepted range were rejected. I addressed this by adding input validation and range checking to the improved program.

If I were to do this laboratory again, I would plan the program structure and testing process earlier so that I could identify errors and verify all test cases more efficiently.



## 8. Conclusion

The objectives of Laboratory 02 were achieved through the implementation and testing of selection and decision-making statements using the C programming language.

The laboratory provided practical experience in using `if`, `else-if`, `else` and `switch` statements to develop a student grading program. The improved program also demonstrated input validation and handling of marks outside the accepted range.

The programs were compiled and tested using GCC, and Git and GitHub were used to manage and submit the laboratory work.

Overall, this laboratory improved my understanding of selection statements, input validation, program testing and version control in C programming.


## 9. Screenshots and Evidence

The following screenshots provide evidence of the laboratory activities completed during Laboratory 02.

All screenshots are stored in the `report/screenshots/` directory.

| No. | Screenshot Filename | Description |
|---|---|---|
| 1 | `branch.png` | GitHub branch information. |
| 2 | `improved-output-01.png` | Improved program output. |
| 3 | `input=-5.png` | Improved program tested with a negative mark. |
| 4 | `input=0.png` | Program tested with mark 0. |
| 5 | `input=100.png` | Program tested with mark 100. |
| 6 | `input=40.png` | Program tested with mark 40. |
| 7 | `input=50.png` | Program tested with mark 50. |
| 8 | `input=72.png` | Program tested with mark 72. |
| 9 | `input=79.png` | Program tested with mark 79. |
| 10 | `input=80.png` | Program tested with mark 80. |
| 11 | `input=85.png` | Program tested with mark 85. |
| 12 | `input=hello.png` | Improved program tested with invalid text input. |
| 13 | `pull-request.png` | GitHub Pull Request #23. |
| 14 | `sumitted-files.png` | GitHub repository showing submitted files. |