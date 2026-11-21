# ICS 2175 – LABORATORY 02 REPORT
## Selection and Decision-Making

### 1. Student Information

- **Name:** Kennedy Musyoka Kyalo
- **Registration Number:** ENB211-0029/2025
- **Programme:** C
- **Unit:** ICS 2175 – Introduction to Computer Programming
- **Institution:** Jomo Kenyatta University of Agriculture and Technology (JKUAT)
- **Laboratory:** Laboratory 02 – Selection and Decision-Making
- **Date Performed:** 20 November 2026

---

### 2. Objective

The objective of this laboratory was to understand and apply selection and decision-making statements in C programming.

The practical aimed to develop my ability to use relational and logical operators to evaluate conditions and implement `if`, `if-else` and `else-if` statements to classify students' marks into grades and determine their pass or fail status.

It also aimed to improve my programming skills through compiling, executing and testing programs using different input values, including boundary values.

---

### 3. Environment and Setup

The laboratory was performed using a Windows computer with the following development tools:

- **Operating System:** Microsoft Windows 11
- **Operating System Build:** 10.0.26200.8037
- **IDE:** Code::Blocks
- **Compiler:** GCC (GNU Compiler Collection)
- **Programming Language:** C
- **Version Control:** Git and GitHub Desktop
- **Repository Hosting:** GitHub

Code::Blocks was used to write, compile and execute the C program. The GCC compiler was used to compile the source code and check for compilation errors.

GitHub Desktop was used to manage the local repository, create the working branch, commit changes and publish the work to GitHub.

---

### 4. Exercise – Selection and Decision-Making

#### 4.1 Source Code

The practical involved implementing decision-making logic in C to classify students' marks into grades and determine their pass or fail status.

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

#### 4.2 Explanation of the Program

1. `#include <stdio.h>` allows the program to use standard input and output functions.
2. `int main(void)` is the main function where program execution begins.
3. `int mark;` declares an integer variable to store the student's mark.
4. `printf()` displays a message requesting the mark.
5. `scanf()` reads the mark entered by the user.
6. The `if-else-if` ladder checks the mark and assigns the appropriate grade.
7. The second `if-else` statement determines whether the student has passed or failed.
8. `return 0;` indicates successful program termination.

#### 4.3 Grading Results

| Mark Range | Grade | Status |
|---|---|---|
| 80–100 | A | Pass |
| 70–79 | B | Pass |
| 60–69 | C | Pass |
| 50–59 | D | Pass |
| 0–49 | F | Fail |

#### 4.4 Program Testing Results

The program was tested using different input values.

| Input Mark | Grade | Status |
|---:|---|---|
| 0 | F | Fail |
| 40 | F | Fail |
| 50 | D | Pass |
| 72 | B | Pass |
| 79 | B | Pass |
| 80 | A | Pass |
| 85 | A | Pass |
| 100 | A | Pass |

The screenshots of the program execution are provided in the `screenshots` folder.

---

### 5. Testing and Troubleshooting

#### 5.1 Program Testing

The program was compiled and executed using Code::Blocks to confirm that it correctly classified students' marks into grades and determined their pass or fail status.

Different test inputs were used to check the program's accuracy, including boundary values.

The tests included:

- Minimum mark of 0.
- Failing mark of 40.
- Passing boundary mark of 50.
- Grade transition marks of 72, 79 and 80.
- Maximum mark of 100.

#### 5.2 Troubleshooting

During testing, the program was checked using different marks to ensure that the conditional statements produced the correct results.

Special attention was given to boundary values such as 50 and 80 because they represent transitions between grades and pass/fail classifications.

The program was executed again after checking the source code to ensure that the output matched the expected grading scale.

#### 5.3 Testing Evidence

The screenshots showing the different program inputs and outputs are available in the `screenshots` folder.

---

### 6. GitHub Workflow

GitHub was used to manage and submit the laboratory work through version control.

The official Kiotolabs Laboratory 02 repository was forked into my personal GitHub account. I used GitHub Desktop to clone the repository to my computer and manage the project files.

An individual working branch was created to keep my changes separate from the main branch. The changes were committed and pushed to my personal GitHub repository.

#### 6.1 Repository Details

- **GitHub Username:** kyalokennedy142-del
- **Personal Repository:** kioto-ics2175-lab02
- **Personal Repository URL:** https://github.com/kyalokennedy142-del/kioto-ics2175-lab02
- **Original Repository:** https://github.com/Kiotolabs/kioto-ics2175-lab02
- **Working Branch:** student/ENB211-0029/2025/lab02
- **Target Branch:** main

#### 6.2 Pull Request Details

- **Pull Request Number:** #5
- **Pull Request Title:** Lab 02 submission — ENB211-0029/2025-#5
- **Pull Request Status:** Open
- **Target Repository:** Kiotolabs/kioto-ics2175-lab02
- **Target Branch:** main
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/5

The pull request was created from my personal repository to the original Kiotolabs repository for review and assessment.

#### 6.3 Commit and Changes

At the time of preparing this report, the pull request showed **4 commits**, demonstrating the progress made while developing and updating the laboratory submission.

The four commits were:

1. **evidence and source-coide** – Added the program source code and supporting evidence.
2. **report updated and pull request** – Updated the laboratory report and pull request details.
3. **report** – Added the laboratory report.
4. **REPORT** – Updated the final report.

All four commits were made on 20 November 2026 under my GitHub account, `kyalokennedy142-del`.

These commits demonstrate the use of version control to track changes and maintain a record of the work completed during the laboratory exercise.
#### 6.4 Automated Validation

The pull request includes a Checks tab for automated validation using GitHub Actions. The checks had not yet reported a result when the pull request details were recorded.

The validation results should be checked before final submission.

---

### 7. Reflection

Through this laboratory, I gained practical experience in using selection and decision-making statements in C programming.

I learned how to use relational operators and conditional statements to evaluate conditions and classify students' marks into different grades. I also understood how an if-else structure can determine whether a student has passed or failed.

Testing the program with different marks helped me understand the importance of checking boundary values to ensure that the program produces accurate results.

I also gained experience using GitHub Desktop to manage source code, create a working branch, commit changes and submit a pull request to the original repository.

One important lesson from this practical was the importance of testing programs with different inputs and maintaining proper version control when working on programming assignments.

In future programming tasks, I would pay more attention to input validation, code organization and testing before submitting my work.

---

### 8. Conclusion

The Laboratory 02 practical provided an opportunity to apply selection and decision-making concepts in C programming.

Through this exercise, I gained a better understanding of relational operators, conditional statements and the use of if-else-if structures to classify students' marks into grades and determine pass or fail status.

I also developed practical skills in compiling, executing and testing C programs using Code::Blocks. Additionally, I gained experience using GitHub and GitHub Desktop to manage my work and submit it through a pull request.

Overall, the practical helped strengthen my understanding of decision-making in programming and the importance of testing and version control in software development.

---

### 9. Evidence and Screenshots

The following screenshots are included in the `screenshots` folder as evidence of the practical work.

| No. | Filename | Description |
|---:|---|---|
| 1 | `source-code-codeblocks.png` | C source code displayed in Code::Blocks. |
| 2 | `input=0.png` | Program execution using input 0. |
| 3 | `input=40.png` | Program execution using input 40. |
| 4 | `input=50.png` | Program execution using input 50. |
| 5 | `input=72.png` | Program execution using input 72. |
| 6 | `input=79.png` | Program execution using input 79. |
| 7 | `input=80.png` | Program execution using input 80. |
| 8 | `input=85.png` | Program execution using input 85. |
| 9 | `input=100.png` | Program execution using input 100. |
| 10 | `files-in-github.png` | GitHub repository showing submitted files. |
| 11 | `pull-request.png` | Screenshot showing Pull Request #5. |

**Evidence folder:** `screenshots/`

**Report filename:** `REPORT.md`

---

**End of Report**