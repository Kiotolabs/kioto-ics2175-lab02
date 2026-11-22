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

It also aimed to improve my programming skills through compiling, executing and testing programs using different input values, including boundary values and invalid inputs.

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

Code::Blocks was used to write, compile and execute the C programs. The GCC compiler was used to compile the source code and check for compilation errors.

GitHub Desktop was used to manage the local repository, create the working branch, commit changes and publish the work to GitHub.

---

### 4. Exercise – Selection and Decision-Making

#### 4.1 Original Source Code

The original practical involved implementing decision-making logic in C to classify students' marks into grades and determine their pass or fail status.

The original source code was preserved as required.

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

#### 4.2 Improved Source Code – improve.c

Following the lecturer's additional instructions, a separate source file named `improve.c` was created.

The improved program introduced input validation to prevent invalid entries and used a `switch` statement to display performance messages according to the assigned grade.

The original source file was retained without replacement.

The improved program also displays additional performance messages to match the updated program output.

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

#### 4.3 Explanation of the Improved Program

1. `#include <stdio.h>` allows the program to use standard input and output functions.
2. `int main(void)` is the main function where program execution begins.
3. `int mark` declares an integer variable to store the student's mark.
4. `char grade` declares a character variable to store the assigned grade.
5. `printf()` displays a message requesting the student's mark.
6. `scanf()` reads the mark entered by the user.
7. The first `if` statement checks whether the input is a valid integer.
8. The second `if` statement checks whether the mark falls within the permitted range of 0 to 100.
9. The `if-else-if` ladder assigns the appropriate grade.
10. The `switch` statement displays a performance message based on the assigned grade.
11. The final `if-else` statement determines whether the student has passed or failed.
12. `return 0` indicates successful program termination.

#### 4.4 Grading Results

| Mark Range | Grade | Performance | Status |
|---|---|---|---|
| 80–100 | A | Excellent performance! | Pass |
| 70–79 | B | Very good performance! | Pass |
| 60–69 | C | Good performance! | Pass |
| 50–59 | D | You have passed. | Pass |
| 0–49 | F | You need to improve. | Fail |

#### 4.5 Program Testing Results

The programs were tested using different input values to check the accuracy of the grading and pass/fail decisions.

| Input Mark | Grade | Status |
|---:|---|---|
| 0 | F | Fail |
| 40 | F | Fail |
| 50 | D | Pass |
| 55 | D | Pass |
| 65 | C | Pass |
| 72 | B | Pass |
| 79 | B | Pass |
| 80 | A | Pass |
| 85 | A | Pass |
| 100 | A | Pass |

The improved program also includes validation for non-numeric inputs, negative marks and marks above 100.

---

### 5. Testing and Troubleshooting

#### 5.1 Program Testing

The programs were compiled and executed using Code::Blocks and GCC to confirm that they correctly classified students' marks into grades and determined their pass or fail status.

Different test inputs were used to check the programs' accuracy, including boundary values.

The tests included:

- Minimum mark of 0.
- Failing mark of 40.
- Passing boundary mark of 50.
- Grade transition marks of 55, 65, 72, 79 and 80.
- Maximum mark of 100.
- Validation of non-numeric input.
- Validation of marks below 0 and above 100.

#### 5.2 Troubleshooting and Improvements

The improved program introduced additional checks to prevent invalid input from being processed.

The `scanf()` return value is checked to determine whether the user entered a valid integer.

The program also checks whether the entered mark is between 0 and 100 before assigning a grade.

The use of the `switch` statement improved the program by separating grade assignment from the display of performance messages.

The original program was retained, while the improvements were implemented in a separate file named `improve.c`.

#### 5.3 Testing Evidence

Screenshots showing the original program execution, improved program output and GitHub submission are available in the `report/screenshots/` directory.

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
- **Pull Request Status:** Open (previously recorded)
- **Target Repository:** Kiotolabs/kioto-ics2175-lab02
- **Target Branch:** main
- **Pull Request URL:** https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/5

The pull request was created from my personal repository to the original Kiotolabs repository for review and assessment.

#### 6.3 Commit and Changes

At the time of preparing the original report, the pull request showed four commits.

The four previously recorded commits were:

1. **evidence and source-coide** – Added the program source code and supporting evidence.
2. **report updated and pull request** – Updated the laboratory report and pull request details.
3. **report** – Added the laboratory report.
4. **REPORT** – Updated the final report.

All four commits were made on 20 November 2026 under my GitHub account, `kyalokennedy142-del`.

The additional `improve.c` file, updated evidence and revised report are part of the subsequent laboratory update. Their commit details will be recorded after the changes have been committed and pushed.

#### 6.4 Automated Validation

The pull request includes a Checks tab for automated validation using GitHub Actions.

The latest validation result should be checked after pushing the additional changes to GitHub.

---

### 7. Reflection

Through this laboratory, I gained practical experience in using selection and decision-making statements in C programming.

I learned how to use relational operators and conditional statements to evaluate conditions and classify students' marks into different grades. I also understood how an if-else structure can determine whether the student has passed or failed.

The improved program helped me understand the importance of input validation and how to use a `switch` statement to display different messages based on a selected grade.

Testing the programs with different marks helped me understand the importance of checking boundary values to ensure that programs produce accurate results.

I also gained experience using GitHub Desktop to manage source code, create a working branch, commit changes and submit a pull request to the original repository.

One important lesson from this practical was the importance of testing programs with different inputs and maintaining proper version control when working on programming assignments.

In future programming tasks, I would pay more attention to input validation, code organization and testing before submitting my work.

---

### 8. Conclusion

The Laboratory 02 practical provided an opportunity to apply selection and decision-making concepts in C programming.

Through this exercise, I gained a better understanding of relational operators, conditional statements and the use of if-else-if structures to classify students' marks into grades and determine pass or fail status.

The additional improvements strengthened my understanding of input validation and the use of switch statements in C programming.

I also developed practical skills in compiling, executing and testing C programs using Code::Blocks and GCC. Additionally, I gained experience using GitHub and GitHub Desktop to manage my work and submit it through a pull request.

Overall, the practical helped strengthen my understanding of decision-making in programming and the importance of testing, input validation and version control in software development.

---

### 9. Evidence and Screenshots

The following screenshots are included in the `report/screenshots/` directory as evidence of the practical work.

| No. | Filename | Description |
|---:|---|---|
| 1 | `source-code-codeblcks.png` | C source code displayed in Code::Blocks. |
| 2 | `input=0.png` | Original program execution using input 0. |
| 3 | `input=40.png` | Original program execution using input 40. |
| 4 | `input=50.png` | Original program execution using input 50. |
| 5 | `input=72.png` | Original program execution using input 72. |
| 6 | `input=79.png` | Original program execution using input 79. |
| 7 | `input=80.png` | Original program execution using input 80. |
| 8 | `input =100.png` | Original program execution using input 100. |
| 9 | `improved-output01.png` | Improved program execution evidence. |
| 10 | `improved-output-02.png` | Additional improved program execution evidence. |
| 11 | `files-in-github.png` | GitHub repository showing submitted files. |
| 12 | `pull-request.png` | Screenshot showing Pull Request #5. |

**Evidence directory:** `report/screenshots/`

**Original source file:** Retained separately.

**Additional source files:** `improve.c`,improve-c-01.png,improve-c-02.png,improve-c-03.png

**Report filename:** `REPORT.md`

---

**End of Report**
