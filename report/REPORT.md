# KIOTO iLMs – COMPUTING LABORATORY

## ICS 2175: INTRODUCTION TO COMPUTER PROGRAMMING

# LABORATORY 02
## SELECTION AND DECISION-MAKING

**Student Name:** Brian Kibet Kipnakiy

**Registration Number:** ENB211-0036/2025

**Programme:** Agricultural and Biosystems Engineering

**Institution:** Jomo Kenyatta University of Agriculture and Technology (JKUAT)

**Date Performed:** 21 November 2026

**GitHub Username:** [254-kibet


## 2. OBJECTIVE

The main objective of Laboratory 02 was to understand and apply selection and decision-making statements in C programming.

The specific objectives were:

1. To understand and use relational operators to compare values.
2. To apply logical operators when constructing programming conditions.
3. To implement `if`, `if-else` and `else-if` statements.
4. To use the `switch` statement for multi-way decision-making.
5. To develop a grading program that classifies students' marks into grades A, B, C, D and F.
6. To determine whether a student has passed or failed based on the marks obtained.
7. To validate user input and test boundary values.
8. To practise using Git and GitHub for version control and submission of programming assignments.



## 3. ENVIRONMENT AND SETUP

### 3.1 Hardware Requirements

The practical was performed using a Windows-based personal computer. The computer was used to write, compile, execute and test C programs.

### 3.2 Software Requirements

The following software tools were used during the practical:

1. **Operating System:** Microsoft Windows.
2. **Programming Language:** C.
3. **Code Editor:** Code::Blocks.
4. **Compiler:** GCC (GNU Compiler Collection).
5. **Version Control:** Git.
6. **Online Repository Hosting:** GitHub.
7. **Repository Management:** GitHub Desktop.
8. **Additional Editor:** Visual Studio Code (VS Code), used to access and manage project files.

### 3.3 Setup Procedure

The Laboratory 02 starter repository was forked from the official Kiotolabs GitHub repository and cloned to the local computer.

The project files were opened and inspected using Visual Studio Code. The C source code was prepared and tested using the programming environment.

The program was saved as `main.c`, compiled and executed to check whether the grading conditions produced the expected results.

### 3.4 Project Structure

The project contained the following important files and folders:

- `.github/` – GitHub workflow configuration.
- `report/` – Laboratory report and screenshots.
- `main.c` – Main C source code.
- `Makefile` – Build instructions.
- `README.md` – Project documentation.
- `.gitignore` – Files excluded from version control.


## 4. EXERCISE – SELECTION AND DECISION-MAKING

### 4.1 Introduction

The exercise involved developing a C program that accepts a student's mark and uses selection statements to determine the corresponding grade and pass or fail status.

The program uses an `if-else-if` ladder to classify marks into five categories: A, B, C, D and F. It also uses an `if-else` statement to determine whether the student has passed or failed.

### 4.2 Grading Scale

The following grading scale was used in the practical:

| Mark Range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

#include <stdio.h>

int main(void) {
    int mark;

  
### 4.3 Source Code

The program was written in the C programming language using the standard input/output library.

#include <stdio.h>

int main(void) {
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



## 5. TESTING AND TROUBLESHOOTING

### 5.1 Program Testing

The grading program was tested using different marks to confirm that it correctly classified students according to the specified grading scale.

The following test cases were used:

| Input Mark | Expected Grade | Expected Status |
|---:|:---:|:---:|
| 0 | F | Fail |
| 40 | F | Fail |
| 50 | D | Pass |
| 72 | B | Pass |
| 79 | B | Pass |
| 80 | A | Pass |
| 85 | A | Pass |
| 100 | A | Pass |

### 5.2 Boundary Testing

Boundary values were considered to ensure that the program correctly handled marks at the limits of each grading category.

The important boundary values included 0, 49, 50, 59, 60, 69, 70, 79, 80 and 100.

### 5.3 Troubleshooting

During testing, the program was checked for compilation errors and incorrect grading results.

The source code was reviewed to ensure that the conditions were arranged in descending order, beginning with the highest mark range.

The program was also checked to ensure that the pass mark was correctly set at 50.

### 5.4 Test Results

The program produced the expected grades and pass/fail statuses for the test inputs used.

Screenshots of the program output were captured and saved in the `report/SCREENSHOTS/` directory as evidence of testing.


## 6. GITHUB WORKFLOW

### 6.1 Introduction

Git and GitHub were used for version control and online submission of the Laboratory 02 practical.

Git helped track changes made to the project files, while GitHub provided an online platform for storing and sharing the source code.

### 6.2 Repository Management

The official Kiotolabs Laboratory 02 repository was used as the starter repository.

The repository was forked into my personal GitHub account and cloned to my local computer using GitHub Desktop.

**Official Repository:**
https://github.com/Kiotolabs/kioto-ics2175-lab02

**Personal Fork URL:**
[Insert your personal fork URL]

### 6.3 Working Branch

An individual working branch was created to manage the practical work.

**Branch Name:**
student/REGISTRATION_NUMBER/lab02

### 6.4 Commit History

Meaningful commits were used to record progress during the practical.

Examples of commit messages include:

1. Complete selection exercises.
2. Implement if/else grading logic.
3. Complete report and tests.

### 6.5 Pull Request Submission

After completing the practical, the individual branch was pushed to the personal GitHub repository.

A pull request was then created from the personal fork to the official Kiotolabs repository.

**Pull Request URL:**
[Insert your actual pull request URL]

The pull request was submitted for review by the lecturer. It was not merged or closed by the student.


## 7. REFLECTION

### 7.1 What I Learned

During Laboratory 02, I learned how to use selection and decision-making statements in C programming.

I gained practical experience in using relational and logical operators to compare values and construct conditions.

I also learned how to use `if`, `if-else`, `else-if` and `switch` statements to control the flow of a program.

The practical improved my understanding of how a computer makes decisions based on conditions.

### 7.2 Challenges Encountered

One of the challenges I encountered was understanding how to arrange multiple conditions correctly when classifying marks into different grades.

Another challenge was testing boundary values to ensure that every mark was assigned to the correct grade.

I also gained experience in managing project files and using GitHub for version control and submission.

### 7.3 How I Overcame the Challenges

I overcame these challenges by reviewing the grading conditions, checking the logical expressions and testing the program using different input values.

I also reviewed the source code whenever an unexpected result occurred.

### 7.4 Skills Gained

The practical improved my skills in:

1. Writing C programs using conditional statements.
2. Applying relational and logical operators.
3. Testing and debugging programs.
4. Using Git and GitHub for version control.
5. Organising programming projects and technical reports.

### 7.5 Areas for Improvement

In future programming exercises, I would like to improve my ability to write more efficient programs, validate user input and use different decision-making techniques confidently.


## 8. CONCLUSION

Laboratory 02 provided practical knowledge and experience in selection and decision-making using the C programming language.

The practical enabled me to understand and apply relational operators, logical operators, `if`, `if-else`, `else-if` and `switch` statements.

I successfully developed a grading program that classifies students' marks into different grades and determines their pass or fail status.

Through testing, I improved my ability to identify errors, check boundary values and verify program output.

I also gained experience in using Git and GitHub to manage programming projects and submit practical work through a pull request.

In conclusion, the objectives of Laboratory 02 were achieved, and the practical strengthened my understanding of conditional statements and decision-making in C programming.


## 9. Evidence

The following screenshots are included in the `report/screenshots/` directory to demonstrate the implementation, testing, and submission of Laboratory 02.

### 9.1 Source Code Evidence
- `sourcecode-1.png`
- `sourcecode-2.png`

### 9.2 Program Testing Evidence
The following screenshots demonstrate the program's behaviour using different input values:

- `input=0.png`
- `input=40.png`
- `input=50.png`
- `input=72.png`
- `input=79.png`
- `input=80.png`
- `input=85.png`
- `input=100.png`

### 9.3 Git Workflow Evidence
- `branch.png` – Evidence of the Git branch.
- `file submitted.png` – Evidence of file submission.

All screenshots are stored in `report/screenshots/` and provide supporting evidence of the work completed during the laboratory exercise.



]

