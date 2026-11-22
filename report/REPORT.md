# ICS 2175 – LABORATORY REPORT 02

# SELECTION AND DECISION-MAKING IN C

**Student Name:** Ruth Owiti  
**Registration Number:** ENB211-0122/2025  
**Programme:** Agricultural and Biosystems Engineering  
**Unit Code:** ICS 2175  
**Unit Name:** Introduction to Computer Programming  
**Laboratory Number:** 02  
**Experiment Title:** Selection and Decision-Making  
**Date Performed:** 20 November 2026  
**Development Environment:** Code::Blocks 25.03 and GCC 14.2.0  
**Submission Platform:** GitHub

---

## 1. Objective

The objective of this laboratory exercise was to understand and apply selection and decision-making statements in the C programming language.

The specific objectives were:

1. To understand and use relational and logical operators when forming conditions.
2. To implement `if`, `if-else`, and `else-if` statements in C.
3. To use conditional statements to classify student marks into different grades.
4. To determine whether a student has passed or failed based on the given grading scale.
5. To implement a `switch-case` statement to display performance messages.
6. To practise input validation, compiling, executing and testing C programs.
7. To understand how Git and GitHub are used to manage and submit programming projects.

## 2. Environment and Setup

The laboratory exercise was performed using a computer running Microsoft Windows 11 Pro. Code::Blocks was used as the integrated development environment (IDE), while GNU GCC was used to compile the C program.

### 2.1 Hardware and Software Environment

The following software tools and configurations were used:

| Component | Specification |
|---|---|
| Operating System | Windows 11 Pro |
| Windows Version | 26H2 |
| OS Build | 26300.9974 |
| IDE | Code::Blocks 25.03 |
| Programming Language | C |
| Compiler | GNU GCC 14.2.0 |
| Toolchain | MinGW-w64 |
| Architecture | x86_64 |

### 2.2 Development Environment

Code::Blocks 25.03 provided the environment for writing, editing and compiling the C source code.

The GNU GCC 14.2.0 compiler, provided through the MinGW-w64 toolchain, was used to compile the program.

### 2.3 Setup and Compilation Procedure

The following steps were followed:

1. Opened Code::Blocks.
2. Opened the Laboratory 02 project.
3. Entered and saved the C source code.
4. Compiled the program using the GCC compiler.
5. Executed the program using different test marks.
6. Checked the program output to verify grade classification, pass/fail status and performance messages.
7. Tested invalid inputs to check the input validation conditions.

## 3. Exercise – Selection and Decision-Making

### 3.1 Problem Description

The exercise involved developing an improved C program that accepts a student's examination mark and classifies it into a grade using conditional statements.

The program also determines whether the student has passed or failed based on the grading scale provided in the laboratory instructions.

In addition, the program validates user input to ensure that the entered value is numeric and falls within the permitted range of 0 to 100.

A `switch-case` structure is also used to display a performance message corresponding to the assigned grade.

The grading system used is:

| Mark Range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

### 3.2 Final Source Code

The final program was implemented in C using input validation, an `if-else-if` ladder, a separate `if-else` decision and a `switch-case` structure.

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

### 3.3 Explanation of the Program

**1. Header file**

`#include <stdio.h>` includes the standard input and output library. It allows the program to use functions such as `printf()` and `scanf()`.

**2. Main function**

`int main(void)` is the entry point of the program. The instructions inside this function are executed when the program runs.

**3. Variable declaration**

Two variables are declared:

- `int mark;` stores the examination mark entered by the user.
- `char grade;` stores the letter grade assigned by the program.

**4. Accepting user input**

`printf("Enter your mark (0-100): ");` displays a prompt asking the user to enter an examination mark.

`scanf("%d", &mark);` attempts to read an integer and store it in the variable `mark`.

**5. Numeric input validation**

The condition:

`if (scanf("%d", &mark) != 1)`

checks whether the input operation successfully reads an integer.

If the user enters non-numeric input, the condition becomes true. The program displays an error message and terminates using `return 1;`.

This prevents the program from proceeding with an invalid input value.

**6. Mark range validation**

The condition:

`if (mark < 0 || mark > 100)`

checks whether the entered mark is below 0 or above 100.

The logical OR operator (`||`) combines the two conditions. If either condition is true, the program displays an invalid-mark message and terminates.

This ensures that only marks within the range of 0 to 100 proceed to the grading section.

**7. Grade classification using an if-else-if ladder**

The program uses an `if-else-if` structure to compare the mark against different grading thresholds.

The conditions assign grades as follows:

- 80–100: Grade A
- 70–79: Grade B
- 60–69: Grade C
- 50–59: Grade D
- 0–49: Grade F

The conditions are evaluated from top to bottom. Once a condition is satisfied, the corresponding grade is assigned to the `grade` variable.

**8. Pass/fail decision**

A separate `if-else` statement checks whether the entered mark is greater than or equal to 50.

- If `mark >= 50` is true, the program displays `Status: Pass`.
- Otherwise, it displays `Status: Fail`.

**9. Performance messages using switch-case**

The `switch (grade)` statement selects a performance message based on the grade assigned by the previous conditional structure.

The messages are:

| Grade | Performance Message |
|---|---|
| A | Excellent performance! |
| B | Very good performance! |
| C | Good performance! |
| D | You have passed. |
| F | You need to improve. |

Each `case` represents a possible grade. The `break` statement terminates the corresponding case and prevents execution from continuing into the next case.

**10. Return statement**

`return 0;` indicates that the program has completed execution successfully.

### 3.4 Program Output

The program was designed to produce different outputs depending on the mark entered by the user.

The following examples show the expected behaviour of the final program.

**Test Case 1: Mark = 100**

```text
Enter your mark (0-100): 100
Grade: A
Status: Pass
Excellent performance!
```

**Test Case 2: Mark = 72**

```text
Enter your mark (0-100): 72
Grade: B
Status: Pass
Very good performance!
```

**Test Case 3: Mark = 65**

```text
Enter your mark (0-100): 65
Grade: C
Status: Pass
Good performance!
```

**Test Case 4: Mark = 55**

```text
Enter your mark (0-100): 55
Grade: D
Status: Pass
You have passed.
```

**Test Case 5: Mark = 40**

```text
Enter your mark (0-100): 40
Grade: F
Status: Fail
You need to improve.
```

**Test Case 6: Non-numeric input**

```text
Enter your mark (0-100): hello
Invalid input! Please enter a number.
```

**Test Case 7: Negative mark**

```text
Enter your mark (0-100): -5
Invalid mark! Enter a mark between 0 and 100.
```

**Test Case 8: Mark above the permitted range**

```text
Enter your mark (0-100): 110
Invalid mark! Enter a mark between 0 and 100.
```

These examples demonstrate how the program handles different grade ranges and rejects invalid inputs.

## 4. Testing and Troubleshooting

### 4.1 Program Testing

The program was designed to be tested using different examination marks to verify the accuracy of grade classification, pass/fail decisions and performance messages.

The test cases cover the different grading categories, boundary values and invalid inputs.

### 4.2 Test Cases

| Test Case | Input | Expected Grade/Response | Expected Status |
|---|---|---|---|
| 1 | 0 | F | Fail |
| 2 | 40 | F | Fail |
| 3 | 50 | D | Pass |
| 4 | 55 | D | Pass |
| 5 | 65 | C | Pass |
| 6 | 72 | B | Pass |
| 7 | 79 | B | Pass |
| 8 | 80 | A | Pass |
| 9 | 85 | A | Pass |
| 10 | 100 | A | Pass |
| 11 | hello | Invalid input message | Not assigned |
| 12 | -5 | Invalid mark message | Not assigned |
| 13 | 110 | Invalid mark message | Not assigned |

The table shows the expected behaviour based on the conditions implemented in the final source code. Actual test results should be confirmed using the program execution evidence.

### 4.3 Boundary and Invalid-Input Testing

Boundary testing is important because it checks how the program behaves at the limits of the accepted values and grading categories.

The following values are particularly important:

- 0 is the lowest permitted mark.
- 49 is the highest mark that receives Grade F.
- 50 is the minimum mark required to pass.
- 79 is the highest mark that receives Grade B.
- 80 is the minimum mark required to receive Grade A.
- 100 is the highest permitted mark.

Invalid-input testing checks whether the program correctly handles:

- Non-numeric input such as `hello`.
- Negative marks such as `-5`.
- Marks above 100 such as `110`.

The validation conditions prevent these invalid values from proceeding to the grade classification section.

### 4.4 Troubleshooting

During the setup process, an issue occurred when checking the GCC compiler through Command Prompt.

The command `gcc --version` was not recognised because the compiler directory was not included in the Windows PATH environment variable.

The issue was investigated by locating the GCC executable inside the Code::Blocks MinGW directory.

The compiler version was successfully verified by executing GCC directly using its full file path. This confirmed that GCC 14.2.0 was installed even though Windows could not recognise the `gcc` command directly.

This helped establish that the compiler was installed and available for compiling the C program.

### 4.5 Testing Evidence

Screenshots of the program execution using different input values are stored in the `report/screenshots/` directory.

The evidence documents the grading output and pass/fail classification for the different marks tested.

The final program also includes validation for non-numeric input and marks outside the accepted range.

## 5. GitHub Workflow

### 5.1 Repository Setup

The official Kiotolabs Laboratory 02 repository was used as the starting point for the practical.

The repository was forked into my personal GitHub account to create an independent copy where I could complete and manage my work.

The fork was cloned to my local computer using GitHub Desktop.

**Official Repository:**

https://github.com/Kiotolabs/kioto-ics2175-lab02

**Personal Fork:**

https://github.com/ruthowiti19-netizen/kioto-ics2175-lab02

### 5.2 Working Branch

An individual working branch was created to keep the Laboratory 02 changes separate from the main branch.

**Branch Name:** `student/ENB211-0122/2025/lab02`

**Base Branch:** `main`

All laboratory modifications were carried out on the individual working branch.

### 5.3 Commit and Push Process

Git was used to track changes made during the laboratory exercise.

A total of 14 commits were included in the submitted pull request. The commit history is available on GitHub for review.

The changes were pushed to the personal GitHub repository before the pull request was created.

### 5.4 Pull Request Submission

A pull request was created from my personal GitHub fork to the official Kiotolabs Laboratory 02 repository.

The submission details were:

- **Upstream Repository:** Kiotolabs/kioto-ics2175-lab02
- **Personal Repository:** ruthowiti19-netizen/kioto-ics2175-lab02
- **Base Branch:** `main`
- **Head Branch:** `student/ENB211-0122/2025/lab02`
- **Pull Request Number:** #8
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/8
- **Pull Request Status:** Open, as recorded in the original submission information.

The pull request was left open for the lecturer to review.

### 5.5 Pull Request Evidence

The pull request screenshot is included in the report evidence directory as:

`pull-request.png`

It provides evidence of the pull request submission and its recorded status.

## 6. Reflection

### 6.1 What I Learned

Through this laboratory exercise, I gained practical experience in using selection and decision-making statements in the C programming language.

I learned how relational operators are used to compare values and how `if`, `else-if` and `if-else` statements control the flow of a program.

I also learned how to use logical operators such as `||` when checking multiple conditions.

The exercise improved my understanding of input validation by showing how a program can check whether the entered value is numeric and whether it falls within an accepted range.

I gained experience using the `switch-case` structure to display different performance messages depending on the grade assigned.

The practical also strengthened my skills in writing C source code, compiling programs using GCC, testing different inputs and managing programming projects using Git and GitHub.

### 6.2 Challenges Encountered

One challenge I encountered was verifying that the GCC compiler was correctly installed and accessible.

The `gcc --version` command was initially not recognised in Command Prompt. I resolved this by running the compiler directly using its installation path, which confirmed that GCC 14.2.0 was installed.

Another challenge was ensuring that the conditional statements were arranged correctly so that each mark received the appropriate grade.

The input validation conditions also required careful implementation to prevent invalid values from being processed by the grading logic.

### 6.3 What I Would Do Differently

If I were to repeat this exercise, I would plan the program logic before writing the code and test all grading boundaries systematically.

I would also test different invalid inputs to ensure that the validation conditions work correctly.

In future programming exercises, I would continue exploring other decision-making structures and improve the organisation and documentation of my source code.

## 7. Conclusion

The Laboratory 02 exercise achieved its main objective of introducing selection and decision-making in the C programming language.

I developed an improved grading program that uses `if`, `else-if`, `if-else` and `switch-case` structures to classify examination marks, determine pass or fail status and display performance messages.

The program also includes input validation to reject non-numeric values and marks outside the permitted range of 0 to 100.

The exercise strengthened my understanding of conditional logic, relational operators, logical operators, input validation, program compilation and testing.

It also improved my practical skills in using Code::Blocks, GCC, Git and GitHub to develop and manage programming projects.

Overall, the laboratory provided valuable experience in writing C programs that make decisions based on user input.

## 8. Evidence

The following screenshots provide evidence of the source code, program execution, testing and GitHub submission for Laboratory 02. They are stored in the `report/screenshots/` directory.

### 8.1 Source Code Screenshots

- `source-code-codeblocks-01.png`
- `source-code-codeblocks02.png`
- `improve-c-01.png`
- `improve-c-02.png`
- `improve-c-03.png`

### 8.2 Program Execution and Testing

- `input=0.png`
- `input=40.png`
- `input=50.png`
- `input=72.png`
- `input=79.png`
- `input=80.png`
- `input=85.png`
- `input=100.png`
- `improved-output01.png`
- `improved-output-02.png`

### 8.3 GitHub Repository Evidence

- `feature-branch.png`
- `submitted-files.png`

### 8.4 Pull Request Evidence

- `pull-request.png`

**Personal Repository:** https://github.com/ruthowiti19-netizen/kioto-ics2175-lab02

**Pull Request:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/8

**END OF REPORT**