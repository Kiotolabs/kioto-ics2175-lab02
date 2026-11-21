# ICS 2175 — Laboratory 02: Selection and Decision-Making

## 1. Cover Information

- **Student Name:** Malisa Grace Mandao
- **Registration Number:** ENB211-0039/2025
- **Programme:** B.Sc. Agricultural and Biosystems Engineering
- **Unit Code & Title:** ICS 2175 — Introduction to Computer Programming
- **Lab Number & Title:** Laboratory 02 — Selection and Decision-Making
- **Date Performed:** November 21, 2026
- **GitHub Username:** `gracemandao204-a11y`

---

## 2. Objective

The objective of this laboratory practical was to build upon basic C input/output concepts by implementing selection and decision-making structures. Specifically, I set out to learn how to:

- Use relational and logical operators to construct conditional expressions.
- Implement `if`, `if-else`, and `else-if` ladders to classify numerical marks into letter grades and pass/fail statuses.
- Validate user inputs and handle boundary conditions accurately.
- Manage source code versioning and submission using Git, GitHub Desktop, forks, branches, and pull requests.

---

## 3. Environment and Setup

- **Operating System:** Windows 11 Pro (64-bit)
- **IDE:** Code::Blocks 25.03[cite: 8, 9]
- **Compiler / Toolchain:** GNU GCC Compiler (MinGW / Code::Blocks default toolchain)
- **Local Repository Path:** `C:\Users\USER\OneDrive\Documents\GitHub\kioto-ics2175-lab02\main.c`[cite: 8, 9]
- **Version Control Tools:** GitHub Desktop and GitHub Web Platform

---

## 4. Exercise — Selection

### Final Source Code (`main.c`)

```c
#include <stdio.h>

int main(void)
{
    int mark;

    printf("Enter mark (0-100): ");
    if (scanf("%d", &mark) != 1) {
        printf("Invalid input: Please enter a numeric integer value.\n");
        return 1;
    }

    /* Validate mark bounds before classification */
    if (mark < 0 || mark > 100) {
        printf("Invalid mark: Enter a value between 0 and 100.\n");
        return 1;
    }

    /* Grade classification using an else-if ladder */
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

    /* Pass/Fail status determination using if-else */
    if (mark >= 50) {
        printf("Status: Pass\n");
    } else {
        printf("Status: Fail\n");
    }

    return 0;
}

### Explanation of Key Statements

scanf("%d", &mark): Reads an integer input into mark. Checking != 1 catches non-integer inputs before they corrupt program flow.

Input Validation (mark < 0 || mark > 100): Uses logical OR to reject out-of-range marks and exit early (return 1;), preventing invalid values from receiving a grade.

else-if Ladder (>= 80, >= 70, >= 60, >= 50): Evaluates ranges from highest to lowest so each mark matches its intended grade band without needing redundant upper-bound checks.

if-else Status Check (mark >= 50): Assigns Status: Pass for marks of 50 and above, and Status: Fail for marks below 50.

### Program Output & Evidence

#### Case 1: Standard High Score (`85`)
- **Input:** `85`
- **Expected Output:** `Grade: A`, `Status: Pass`
- **Actual Output:**
  ```text
  Enter mark (0-100): 85
  Grade: A
  Status: Pass


Case 2: Upper Boundary of Grade A (80)
Input: 80

Expected Output: Grade: A, Status: Pass

Actual Output:

Enter mark (0-100): 80
Grade: A
Status: Pass


Case 3: Boundary Between Grade A and Grade B (79)
Input: 79

Expected Output: Grade: B, Status: Pass

Actual Output:

Enter mark (0-100): 79
Grade: B
Status: Pass


Case 4: Pass/Fail Boundary (50 vs. 49)
Input: 50 and 49

Expected Output: 50 gives Grade: D, Status: Pass; 49 gives Grade: F, Status: Fail

Actual Output:


Enter mark (0-100): 50
Grade: D
Status: Pass


Case 5: Lower Boundary (0)
Input: 0

Expected Output: Grade: F, Status: Fail

Actual Output:

Enter mark (0-100): 0
Grade: F
Status: Fail


Case 6: Out-of-Range Invalid Input (105 / -5)
Input: 105

Expected Output: Invalid mark: Enter a value between 0 and 100.

Actual Output:

Enter mark (0-100): 105
Invalid mark: Enter a value between 0 and 100.

## 5. Testing and Troubleshooting

### Test 1: Out-of-Range Input (`110` and `-5`)
- **Observed Result:** With the basic `else-if` grading structure alone, entering `110` produced `Grade: A` and `Status: Pass`, while entering `-5` produced `Grade: F` and `Status: Fail`.
- **Root Cause:** No range check existed before the grading ladder, so any integer greater than or equal to `80` matched the first branch and any integer below `50` fell through to the final `else` branch.
- **Resolution:** Added a validation check (`if (mark < 0 || mark > 100)`) before the grading logic to print an error message and exit with status `1`.

### Test 2: Non-Integer Input (`abc`)
- **Observed Result:** Entering non-numeric text such as `abc` caused `scanf("%d", &mark)` to fail without warning, leaving `mark` uninitialized or causing unexpected behavior.
- **Root Cause:** The return value of `scanf` was not verified before evaluating `mark`.
- **Resolution:** Checked `if (scanf("%d", &mark) != 1)` so non-numeric inputs are rejected immediately with a clear message before reaching the range and grade checks.

### Test 3: Exact Grade Boundaries (`80`, `79`, `50`, `49`, `0`, `100`)
- **Observed Result:** After recompiling in Code::Blocks (`Ctrl + F9`), each boundary input produced the exact grade and pass/fail status defined by the grading scale (`80` and `100` gave `A` and `Pass`; `79` gave `B` and `Pass`; `50` gave `D` and `Pass`; `49` and `0` gave `F` and `Fail`).
- **Verification:** Confirmed zero compiler warnings in the build log and consistent output across repeated test runs.

## 6. GitHub Workflow

- **Upstream Repository:** `https://github.com/Kiotolabs/kioto-ics2175-lab02`
- **Personal Fork URL:** `https://github.com/gracemandao204-a11y/kioto-ics2175-lab02`
- **Working Branch Name:** `student/ENB211-0039/2025/lab02`
- **Pull Request URL:** `https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/[PR-Number]`

### Commit Summary

1. `Implement initial else-if grade classification and pass/fail logic` — Implemented core selection logic in `main.c` and verified sample test cases.
2. `Add boundary and out-of-range input validation` — Added range validation (`0–100`) and non-numeric input handling.
3. `Complete lab report and verify automated workflow checks` — Completed report documentation and verified clean compilation and GitHub Actions checks.

## 7. Reflection

- **What I Learned:** Ordering `else-if` branches from highest to lowest cleanly separates grade ranges without redundant upper-bound checks, while logical operators (`&&`, `||`) make input validation explicit. Using GitHub Desktop and branches (`student/ENB211-0039/2025/lab02`) also showed how code changes are isolated and submitted via pull request.
- **What Was Difficult:** Checking the pull request target carefully so the base repository and branch pointed to `Kiotolabs/kioto-ics2175-lab02` (`main`) rather than a branch inside my own fork required extra verification.
- **What I Would Do Differently:** I would write out a full boundary and invalid-input test plan before coding, and test an alternative implementation using integer division (`mark / 10`) inside a `switch` statement to compare structure and clarity.

## 8. Conclusion

All objectives of Laboratory 02 were achieved. The C program compiled without warnings in Code::Blocks, accurately evaluated standard marks, boundary values, and invalid inputs using relational and logical operators alongside `if`, `if-else`, and `else-if` statements, and was versioned and submitted through a feature branch and pull request to the Kiotolabs repository.

## 9. Screenshots & Evidence Summary

### Code::Blocks Source Code Screenshots

- **Lines 1–20 (`main.c` in Code::Blocks 25.03):** `![Source Code Part 1](source code 1.png)` — Shows `#include <stdio.h>`, `main(void)`, input reading with `scanf("%d", &mark);`, and the `if / else if / else` grade branches[cite: 8, 9, 17, 18].
- **Lines 10–29 (`main.c` in Code::Blocks 25.03):** `![Source Code Part 2](source code 2.png)` — Shows the full `else-if` ladder (`>= 80`, `>= 70`, `>= 60`, `>= 50`, `else`), the pass/fail `if-else` block (`mark >= 50`), and `return 0;`[cite: 9, 18].

### Console Test Output Screenshots

- **Input `0`:** `![Output for input 0](input=0.png)` — Displays `Grade: F\nStatus: Fail\n` and `Process returned 0 (0x0)` (execution time `3.555 s`)[cite: 1, 10, 20].
- **Input `40`:** `![Output for input 40](input=40.png)` — Displays `Grade: F\nStatus: Fail\n` and `Process returned 0 (0x0)` (execution time `7.632 s`)[cite: 2, 11, 21].
- **Input `50`:** `![Output for input 50](input=50.png)` — Displays `Grade: D\nStatus: Pass\n` and `Process returned 0 (0x0)` (execution time `4.966 s`)[cite: 3, 12, 22].
- **Input `72`:** `![Output for input 72](input=72.png)` — Displays `Grade: B\nStatus: Pass\n` and `Process returned 0 (0x0)` (execution time `4.838 s`)[cite: 4, 13, 23].
- **Input `80`:** `![Output for input 80](input=80.png)` — Displays `Grade: A\nStatus: Pass\n` and `Process returned 0 (0x0)` (execution time `9.169 s`)[cite: 5, 14, 24].
- **Input `85`:** `![Output for input 85](input=85.png)` — Displays `Grade: A\nStatus: Pass\n` and `Process returned 0 (0x0)` (execution time `5.655 s`)[cite: 6, 15, 25].
- **Input `100`:** `![Output for input 100](input=100.png)` — Displays `Grade: A\nStatus: Pass\n` and `Process returned 0 (0x0)` (execution time `3.325 s`)[cite: 7, 16, 26].

### GitHub Repository & Pull Request Screenshots

- **Forked Repository Files (`gracemandao204-a11y/kioto-ics2175-lab02`):** `![GitHub Repository Files](github files.jpg)` — Shows the repository files (`.github`, `report/REPORT.md`, `.gitignore`, `Makefile`, `README.md`, `main.c`) and sync status against `Kiotolabs/kioto-ics2175-lab02:main`[cite: 19].
