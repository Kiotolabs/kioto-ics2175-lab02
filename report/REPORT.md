# JOMO KENYATTA UNIVERSITY OF AGRICULTURE AND TECHNOLOGY

## ICS 2175 – INTRODUCTION TO COMPUTER PROGRAMMING

# LABORATORY 02: SELECTION AND DECISION-MAKING

### INDIVIDUAL TECHNICAL REPORT

**Student Name:** Patrick Nthanga Mutiso  
**Registration Number:** ENB211-0026/2025  
**Programme:** Agricultural and Biosystems Engineering  
**Unit:** ICS 2175 – Introduction to Computer Programming  
**Laboratory Number:** 02  
**Date Performed:** 20 November 2026  
**GitHub Username:** patoh104  

---

# 1. OBJECTIVES

The objectives of this practical were:

1. To understand and apply relational and logical operators in C programming.
2. To implement selection statements, including `if`, `if-else`, and `else-if` ladders.
3. To develop a program that classifies students' examination marks into grades.
4. To determine students' pass or fail status using conditional statements.
5. To implement a `switch` statement for displaying descriptive messages corresponding to grades.
6. To apply input validation techniques to prevent invalid data from being processed.
7. To test a program using different inputs, including boundary values and invalid inputs.
8. To practise compiling, executing, debugging and managing C programs using Git and GitHub.

# 2. ENVIRONMENT AND SETUP

## 2.1 Software and Tools Used

The practical was carried out using the following software and tools:

| Component | Description |
|---|---|
| Operating system | Windows 11 Pro |
| Programming language | C |
| Code editor | Visual Studio Code |
| Compiler | GCC (MinGW) |
| Version control system | Git |
| Online repository | GitHub |
| Terminal | Windows PowerShell |

## 2.2 Repository Setup

The official Kiotolabs Laboratory 02 repository was forked into my GitHub account and cloned to my local computer. An individual working branch was created to facilitate development and submission of the practical.

The working branch followed the required registration-number format:

`student/ENB211-0026/2025/lab02`

The original source code was maintained in `main.c`. Following the updated laboratory instructions, an additional source file named `improve.c` was created to contain the improved implementation of the grading program.

Both files were maintained in the same repository to preserve the original work and demonstrate the improvements made.

# 3. EXERCISE: SELECTION AND DECISION-MAKING

## 3.1 Introduction

Selection and decision-making are fundamental concepts in programming that enable a program to execute different instructions depending on whether certain conditions are satisfied.

In the C programming language, selection statements include `if`, `if-else`, `else-if` ladders and `switch` statements. These structures allow programs to evaluate conditions and determine which statements should be executed.

In this practical, selection statements were used to develop a grading program that accepts a student's examination mark, assigns a letter grade and determines whether the student has passed or failed.

The laboratory was initially implemented using an `else-if` ladder and an `if-else` statement. The program was subsequently improved by incorporating input validation, logical operators, a character variable for storing grades and a `switch` statement for displaying grade descriptions.

## 3.2 Original Source Code

The initial implementation was saved in the `main.c` source file.

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

## 3.3 Explanation of the Original Program

The program begins with the inclusion of the standard input/output library using:

`#include <stdio.h>`

This library provides functions such as `printf()` and `scanf()` for displaying information and receiving user input.

The variable `mark` is declared as an integer to store the examination mark entered by the user.

The `printf()` function displays a prompt requesting the user to enter a mark between 0 and 100. The `scanf()` function reads the entered value and stores it in the variable `mark`.

An `else-if` ladder is used to compare the mark against different grading thresholds. Depending on the condition satisfied, the program displays the appropriate grade.

A separate `if-else` statement checks whether the mark is greater than or equal to 50. If the condition is true, the student is classified as having passed. Otherwise, the student is classified as having failed.

The statement `return 0;` indicates successful termination of the program.

## 3.4 Grading Scale

The grading scale used in the program was:

| Marks | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

The grading conditions were arranged from the highest mark to the lowest. This ensures that a mark is assigned to the correct category when the conditions are evaluated sequentially.

## 3.5 Compilation and Execution of the Original Program

The original program was compiled using the GCC compiler supplied with Code::Blocks through Windows PowerShell.

The GCC executable was located in the following directory:

`C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe`

The compilation command used was:

```powershell
& "C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" main.c -o main.exe
```

This command instructs the GCC compiler to compile `main.c` and generate an executable file named `main.exe`.

The program was prepared for execution using:

```powershell
.\main.exe
```

The program requests a mark from the user, assigns a grade and displays the student's pass or fail status.

**Figure 1:** Compilation of the original `main.c` program.

**Figure 2:** Execution of the original grading program.

*Screenshots of the actual compilation and execution results to be inserted here.*

# 4. IMPROVEMENT OF THE ORIGINAL PROGRAM

## 4.1 Introduction to the Improvement

Following the updated laboratory instructions, an improved version of the original grading program was developed and saved in a separate source file named `improve.c`.

The original `main.c` file was retained without being deleted or replaced. The improved version incorporated additional programming concepts to increase reliability, improve input handling and provide more descriptive program output.

The improvements included input validation, range checking, the use of logical operators, storage of grades using a character variable and implementation of a `switch` statement.

## 4.2 Improved Source Code

The following code was implemented in the new `improve.c` source file:

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

## 4.3 Explanation of the Improvements

### 4.3.1 Input Validation

The statement:

```c
if (scanf("%d", &mark) != 1)
```

checks whether the user has entered a valid integer.

The `scanf()` function returns the number of successfully read and assigned items. If the user enters a non-numeric value such as letters instead of an integer, the condition becomes true and the program displays an error message.

This prevents invalid non-numeric input from being processed as an examination mark.

### 4.3.2 Range Validation

The statement:

```c
if (mark < 0 || mark > 100)
```

checks whether the entered mark falls outside the acceptable range of 0 to 100.

The logical OR operator (`||`) combines two conditions. If either condition is true, the program identifies the mark as invalid and terminates.

This prevents marks below zero or above 100 from being assigned grades.

### 4.3.3 Character Variable

The declaration:

```c
char grade;
```

introduces a character variable used to store the letter grade obtained by the student.

Instead of displaying the grade directly within every grading condition, the program assigns the appropriate letter to `grade` and subsequently uses it in other statements.

### 4.3.4 Improved Else-If Ladder

The improved program retains the `else-if` ladder to assign grades according to the student's mark.

The grade is assigned as follows:

- Marks of 80 and above receive grade A.
- Marks of 70 to 79 receive grade B.
- Marks of 60 to 69 receive grade C.
- Marks of 50 to 59 receive grade D.
- Marks below 50 receive grade F.

The assigned grade is stored in the character variable `grade`.

### 4.3.5 Switch Statement

The `switch` statement is used to display a descriptive message corresponding to the grade stored in the variable `grade`.

For example, grade A displays "Excellent", grade B displays "Very Good", grade C displays "Good", grade D displays "Pass", and grade F displays "Fail".

The `break` statement terminates each case and prevents execution from continuing into the next case.

### 4.3.6 Pass and Fail Classification

The final `if-else` statement determines whether the student has passed or failed.

A mark of 50 or above results in a pass, while a mark below 50 results in a fail.

This condition is independent of the descriptive message generated by the `switch` statement.

## 4.4 Comparison Between the Original and Improved Programs

| Feature | Original `main.c` | Improved `improve.c` |
|---|---|---|
| Accepts examination marks | Yes | Yes |
| Uses an else-if ladder | Yes | Yes |
| Assigns grades | Yes | Yes |
| Determines pass/fail status | Yes | Yes |
| Validates numeric input | No | Yes |
| Checks mark range | No | Yes |
| Uses logical operators | No | Yes |
| Stores grade in a character variable | No | Yes |
| Uses a switch statement | No | Yes |
| Displays descriptive grade messages | No | Yes |
| Rejects invalid marks | No | Yes |

The improved program provides additional functionality while maintaining the original grading logic.

# 5. TESTING AND TROUBLESHOOTING

## 5.1 Purpose of Testing

Testing was intended to verify that both programs correctly classify marks, assign the appropriate grades and determine pass or fail status.

The improved program was additionally tested for its ability to reject invalid inputs and marks outside the acceptable range.

Testing included normal values, boundary values and invalid inputs.

## 5.2 Test Cases for the Original Program

| Input mark | Expected grade | Expected status |
|---:|---|---|
| 85 | A | Pass |
| 72 | B | Pass |
| 65 | C | Pass |
| 55 | D | Pass |
| 40 | F | Fail |
| 50 | D | Pass |
| 80 | A | Pass |
| 0 | F | Fail |
| 100 | A | Pass |
| 79 | B | Pass |

The original program was designed to classify marks according to the specified grading scale.

## 5.3 Test Cases for the Improved Program

| Test | Input | Expected result |
|---|---|---|
| 1 | 95 | Grade A, Excellent, Pass |
| 2 | 85 | Grade A, Excellent, Pass |
| 3 | 75 | Grade B, Very Good, Pass |
| 4 | 65 | Grade C, Good, Pass |
| 5 | 55 | Grade D, Pass, Pass |
| 6 | 49 | Grade F, Fail, Fail |
| 7 | 0 | Grade F, Fail, Fail |
| 8 | 100 | Grade A, Excellent, Pass |
| 9 | -5 | Invalid mark |
| 10 | 105 | Invalid mark |
| 11 | abc | Invalid input |

## 5.4 Boundary-Value Testing

Boundary-value testing was used to identify values at the limits of the grading categories.

The following values were selected because they occur immediately before or at the transition between grades.

| Mark | Expected grade |
|---:|---|
| 0 | F |
| 49 | F |
| 50 | D |
| 59 | D |
| 60 | C |
| 69 | C |
| 70 | B |
| 79 | B |
| 80 | A |
| 100 | A |

These values help verify that the program correctly handles the grading thresholds and does not assign incorrect grades at category boundaries.

## 5.5 Expected Output of the Improved Program

When the user enters 85, the expected output is:

```text
Enter mark (0-100): 85
Grade: A
Excellent
Status: Pass
```

When the user enters 55, the expected output is:

```text
Enter mark (0-100): 55
Grade: D
Pass
Status: Pass
```

When the user enters 45, the expected output is:

```text
Enter mark (0-100): 45
Grade: F
Fail
Status: Fail
```

When the user enters 105, the expected output is:

```text
Enter mark (0-100): 105
Invalid mark! Enter 0-100.
```

When the user enters a non-numeric value such as `abc`, the expected output is:

```text
Enter mark (0-100): abc
Invalid input!
```

**Note:** The expected outputs above are based on the program logic. Actual test results and screenshots should be included after execution.

## 5.6 Troubleshooting

During the initial attempt to compile the C program using PowerShell, the command `gcc` was not recognised. This indicated that the compiler directory was not available through the system PATH.

The problem was addressed by locating the GCC executable inside the Code::Blocks MinGW installation directory and using its full path when compiling the source files.

The compiler was accessed using:

`C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe`

The compilation command for the improved program was:

```powershell
& "C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" improve.c -o improve.exe
```

An additional IntelliSense configuration issue was encountered in Visual Studio Code, where no compiler paths were automatically detected.

The compiler path was therefore identified manually to enable proper compiler configuration and improve code analysis within the editor.

**Figure 3:** GCC compiler path used during compilation.

**Figure 4:** Compilation of `improve.c`.

**Figure 5:** Execution of `improve.exe` using a valid mark.

**Figure 6:** Execution of `improve.exe` using invalid input.

*Actual screenshots to be inserted.*

# 6. GITHUB VERSION CONTROL AND SUBMISSION

## 6.1 Repository Details

The laboratory work was maintained using Git and GitHub to support version control and submission.

The repository details were:

- **GitHub username:** patoh104
- **Personal repository:** https://github.com/patoh104/kioto-ics2175-lab02
- **Working branch:** `student/ENB211-0026/2025/lab02`
- **Original source file:** `main.c`
- **Improved source file:** `improve.c`
- **Pull request:** To be confirmed after the latest update.

## 6.2 Repository Update

Following the updated laboratory instructions, a new file named `improve.c` was created in the existing repository.

The original `main.c` was retained to preserve the initial implementation. The improved program was added separately to demonstrate the additional programming concepts.

The changes were staged, committed and pushed to the existing working branch.

The commands used to stage and commit the new file were:

```powershell
git status
git add improve.c
git commit -m "Add improved Lab 02 grading program"
git push
```

The existing pull request was updated by pushing the new commit to the same branch.

This workflow ensured that the original implementation remained available while the improved version was incorporated into the submission.

## 6.3 Importance of Version Control

Git and GitHub were used to track changes made to the source code and maintain a record of the development process.

The use of a separate branch allowed the laboratory work to be developed independently of the original repository. Commits provided a history of changes, while the pull request facilitated submission and review of the completed work.

**Figure 7:** GitHub repository showing the original and improved source files.

**Figure 8:** Commit history showing the addition of `improve.c`.

**Figure 9:** Updated pull request.

*Screenshots of the actual GitHub evidence to be inserted.*

# 7. REFLECTION

This practical improved my understanding of selection and decision-making in the C programming language.

Through the original program, I learned how relational operators and an `else-if` ladder can be used to classify examination marks into different grades. I also understood how an `if-else` statement can determine whether a student has passed or failed.

The improved program introduced additional concepts, including input validation, logical operators, character variables and `switch` statements. These concepts helped me understand how to make a program more reliable and user-friendly.

The use of input validation demonstrated the importance of checking user input before performing calculations or making decisions. Range checking also helped prevent invalid examination marks from being processed.

I encountered challenges when attempting to access GCC directly through PowerShell because the compiler was not recognised through the system PATH. I addressed this by locating the GCC executable in the Code::Blocks MinGW installation directory and using its full path.

I also learned how to maintain multiple source files within the same repository, use Git to track changes and update an existing pull request without replacing the original implementation.

Overall, the practical strengthened my programming skills, debugging abilities and understanding of software development using version control.

# 8. CONCLUSION

The practical successfully demonstrated the application of selection and decision-making statements in C programming.

The original program used an `else-if` ladder to classify examination marks and an `if-else` statement to determine pass or fail status. The improved program extended these capabilities by introducing input validation, logical operators, a character variable for storing grades and a `switch` statement for displaying descriptive messages.

Maintaining the original and improved programs separately demonstrated the importance of preserving source code during software development and using version control to track improvements.

The practical provided valuable experience in C programming, compilation, debugging, testing, input validation and GitHub-based submission of programming assignments.