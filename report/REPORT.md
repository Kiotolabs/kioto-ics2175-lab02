# ICS 2175 – LABORATORY 02 REPORT

## 1. Student Information

- **Name:** Kennedy Musyoka Kyalo
- **Registration Number:** ENB211-0029/2025
- **Programme:** [To be confirmed]
- **Unit:** ICS 2175 – Introduction to Computer Programming
- **Laboratory:** Laboratory 02 – Selection and Decision-Making
- **Date Performed:** 20 november 2026

## 2. Objective

The objective of this laboratory was to understand and apply selection and decision-making statements in C programming.

The practical aimed to develop my ability to use relational and logical operators to evaluate conditions and implement `if`, `if-else` and `else-if` statements to classify students' marks into grades and determine their pass or fail status.

It also aimed to improve my programming skills through compiling, executing and testing programs using different input values, including boundary values.

## 3. Environment and Setup

The laboratory was performed using a Windows computer with the following development tools:

- **Operating System:** Microsoft Windows 11
- **Operating System Build:** 10.0.26200.8037
- **IDE:** Code::Blocks
- **Compiler:** GCC (GNU Compiler Collection)
- **Programming Language:** C
- **Version Control:** Git and GitHub Desktop

Code::Blocks was used to write, compile and execute the C program. The GCC compiler was used to compile the source code and check for compilation errors.

GitHub Desktop was used to manage the local repository, create the working branch, commit changes and publish the work to GitHub.

## 4. Exercise – Selection and Decision-Making

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

### 4.2 Explanation

1. `#include <stdio.h>` allows the program to use standard input and output functions.
2. `int main(void)` is the main function where program execution begins.
3. `int mark;` declares an integer variable to store the student's mark.
4. `printf()` displays a message requesting the mark.
5. `scanf()` reads the mark entered by the user.
6. The `if-else-if` ladder checks the mark and assigns the appropriate grade.
7. The second `if-else` statement determines whether the student has passed or failed.
8. `return 0;` indicates successful program termination.

### 4.3 Grading Results

| Mark Range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

### 4.4 Program Testing Results

| Input | Grade | Status |
|---|---|---|
| 40 | F | Fail |
| 50 | D | Pass |
| 72 | B | Pass |
| 80 | A | Pass |
| 100 | A | Pass |

Screenshots showing the program execution for different test inputs are provided in the `screenshots` folder.

## 5. Testing and Troubleshooting

### 5.1 Program Testing

The program was compiled and executed using Code::Blocks to confirm that it correctly classified students' marks into grades and determined their pass or fail status.

Different test inputs were used to check the program's accuracy, including boundary values.

The following test cases were performed:

| Input Mark | Expected Grade | Expected Status |
|---:|---|---|
| 0 | F | Fail |
| 40 | F | Fail |
| 50 | D | Pass |
| 72 | B | Pass |
| 79 | B | Pass |
| 80 | A | Pass |
| 85 | A | Pass |
| 100 | A | Pass |

### 5.2 Troubleshooting

During testing, the program was checked using different marks to ensure that the conditional statements produced the correct results.

Special attention was given to boundary values such as 50 and 80 because they represent transitions between grades and pass/fail classifications.

The program was executed again after checking the source code to ensure that the output matched the expected grading scale.

### 5.3 Testing Evidence

Screenshots of the program execution for different input values are available in the `screenshots` folder. They demonstrate the results obtained during testing.

## 6. GitHub Workflow

GitHub was used to manage and submit the laboratory work through version control.

The official Kiotolabs Laboratory 02 repository was forked into my personal GitHub account. I used GitHub Desktop to clone the repository to my computer and manage the project files.

An individual working branch was created to keep my changes separate from the main branch. The changes were committed and pushed to my personal GitHub repository.

### 6.1 Repository Details

- **GitHub Username:** kyalokennedy142-del
- **Personal Repository:** kioto-ics2175-lab02
- **Personal Repository URL:** https://github.com/kyalokennedy142-del/kioto-ics2175-lab02
- **Original Repository:** https://github.com/Kiotolabs/kioto-ics2175-lab02
- **Working Branch:** student/ENB211-0029/2025/lab02
- **Target Branch:** main

### 6.2 Pull Request Details

- **Pull Request Number:** #5
- **Pull Request Title:** Lab 02 submission — ENB211-0029/2025- #5
- **Pull Request Status:** Open
- **Target Repository:** Kiotolabs/kioto-ics2175-lab02
- **Target Branch:** main
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/5

The pull request was created from my personal repository to the original Kiotolabs repository for review and assessment.

### 6.3 Commit and Changes

At the time of preparing this report, the pull request showed:

- 1 commit.
- 11 files changed.
- 21 additions and 9 deletions.

### 6.4 Automated Validation

The pull request includes a Checks tab for automated validation using GitHub Actions. The checks had not yet reported a result when the screenshot was captured.

A screenshot of the GitHub repository and pull request is included in the screenshots folder.


## 7. Reflection

Through this laboratory, I gained practical experience in using selection and decision-making statements in C programming.

I learned how to use relational operators and conditional statements to evaluate conditions and classify students' marks into different grades. I also understood how an if-else structure can determine whether a student has passed or failed.

Testing the program with different marks helped me understand the importance of checking boundary values to ensure that the program produces accurate results.

I also gained experience using GitHub Desktop to manage source code, create a working branch, commit changes and submit a pull request to the original repository.

One important lesson from this practical was the importance of testing programs with different inputs and maintaining proper version control when working on programming assignments.

In future programming tasks, I would pay more attention to input validation, code organization and testing before submitting my work.

## 8. Conclusion

The Laboratory 02 practical provided an opportunity to apply selection and decision-making concepts in C programming.

Through this exercise, I gained a better understanding of relational operators, conditional statements and the use of if-else-if structures to classify students' marks into grades and determine pass or fail status.

I also developed practical skills in compiling, executing and testing C programs using Code::Blocks. Additionally, I gained experience using GitHub and GitHub Desktop to manage my work and submit it through a pull request.

Overall, the practical helped strengthen my understanding of decision-making in programming and the importance of testing and version control in software development.