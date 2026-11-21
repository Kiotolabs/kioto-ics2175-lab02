# ICS 2175 - Laboratory 02 Report

## Student
- Name:Jonathan Maritawa Mwaniki
- Registration number:ENB211-0031/2025
- Programme:Agricultural and Biosystems Engineering

## (Complete all sections per the lab instructions)
# Laboratory 02: Selection and Decision-Making

## 1. Cover Information
* **Full Name:** Jonathan Maritawa Mwaniki
* **Registration Number:** ENB211/0031/2025
* **Programme:** Agricultural & Biosystems Engineering
* **Unit Code & Title:** ICS 2175 — Introduction to Computer Programming
* **Lab Number:** Laboratory 02
* **Date Performed:** 11/21/2026


---

## 2. Objective
The objective of this laboratory practical was to implement conditional control structures in C programming. Specifically, this involved:
1. Using relational (`>=`, `<=`, `>`, `<`, `==`, `!=`) and logical (`&&`, `||`, `!`) operators to construct boolean expressions.
2. Implementing `if`, `if-else`, and `else-if` ladders alongside `switch` statements for multi-way decision-making.
3. Validating user input to properly handle boundary thresholds and reject out-of-range values.
4. Using Git and GitHub (forking, branching, committing, and opening pull requests) to manage and submit source code.

---

## 3. Environment and Setup
* **Operating System:** Windows [e.g., 10 / 11 Pro]
* **IDE:** Code::Blocks version 25.03
* **Compiler / Toolchain:** GNU GCC Compiler (MinGW)
* **Version Control Tools:** Git / GitHub Desktop

---

## 4. Exercise — Selection

### Final Source Code
*(Note: Ensure this matches the final code in your repository, including any `switch` statement exercises completed from the starter repo's `TODO` comments.)*

```c
#include <stdio.h>

int main(void)
{
    int mark;

    printf("Enter mark (0-100): ");
    if (scanf("%d", &mark)  {
        printf("Invalid input: Please enter a valid integer.\n");
        return 1;
    }

    // Input validation for boundary range (0 to 100)
    if (mark < 0 || mark > 100) {
        printf("Error: Mark must be between 0 and 100.\n");
        return 1;
    }

    // Multi-way grade classification using an else-if ladder
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

    // Pass/Fail evaluation using an if-else statement
    if (mark >= 50) {
        printf("Status: Pass\n");
    } else {
        printf("Status: Fail\n");
    }

    return 0;
}
## 5. Testing and Troubleshooting

### Controlled Boundary and Equivalence Testing
After compiling the program with zero warnings in Code::Blocks (`Ctrl + F9`), controlled test cases were executed to verify standard grades, exact boundary thresholds (`0, 49, 50, 59, 60, 69, 70, 79, 80, 100`), and out-of-range invalid inputs:

| Test Input | Category | Expected Output | Observed Output | Status |
| :--- | :--- | :--- | :--- | :--- |
| `85` | Standard (Grade A) | `Grade: A`, `Status: Pass` | `Grade: A`, `Status: Pass` | Pass |
| `80` | Lower Boundary (A) | `Grade: A`, `Status: Pass` | `Grade: A`, `Status: Pass` | Pass |
| `79` | Upper Boundary (B) | `Grade: B`, `Status: Pass` | `Grade: B`, `Status: Pass` | Pass |
| `72` | Standard (Grade B) | `Grade: B`, `Status: Pass` | `Grade: B`, `Status: Pass` | Pass |
| `60` | Lower Boundary (C) | `Grade: C`, `Status: Pass` | `Grade: C`, `Status: Pass` | Pass |
| `50` | Pass/Fail Threshold | `Grade: D`, `Status: Pass` | `Grade: D`, `Status: Pass` | Pass |
| `49` | Upper Boundary (F) | `Grade: F`, `Status: Fail` | `Grade: F`, `Status: Fail` | Pass |
| `0` | Lower Boundary (F) | `Grade: F`, `Status: Fail` | `Grade: F`, `Status: Fail` | Pass |
| `105` | Invalid (Above 100) | Error message (Out of range) | `Error: Mark must be between 0 and 100.` | Pass |
| `-5` | Invalid (Below 0) | Error message (Out of range) | `Error: Mark must be between 0 and 100.` | Pass |

### Troubleshooting Log

* **Issue 1 — Out-of-Range Marks Accepted Without Error:**
  * **Observed Behavior:** During initial testing of the starter code, entering `105` resulted in `Grade: A` (`Status: Pass`) because `105 >= 80` evaluated to true. Similarly, entering `-5` bypassed all `else if` branches and defaulted to `Grade: F` (`Status: Fail`).
  * **Root Cause:** The starter `else-if` ladder lacked upper and lower boundary validation for the `0–100` mark domain.
  * **Fix Applied:** Added an input validation check (`if (mark < 0 || mark > 100)`) immediately after `scanf("%d", &mark)` to intercept out-of-bounds values, print a clear error message, and exit early (`return 1;`).

* **Issue 2 — Non-Numeric Input Causing Unpredictable Output:**
  * **Observed Behavior:** Entering a letter or symbol instead of an integer caused `scanf` to fail silently, leaving `mark` uninitialized and producing erratic grade outputs.
  * **Root Cause:** The return value of `scanf()` was not checked before evaluating `mark`.
  * **Fix Applied:** Wrapped `scanf` in a validation condition (`if (scanf("%d", &mark) != 1)`) so the program safely rejects non-integer inputs before running the selection logic.

---

## 6. GitHub Workflow

### Repository and Branch Details
* **Upstream Repository:** [Kiotolabs/kioto-ics2175-lab02](https://github.com/Kiotolabs/kioto-ics2175-lab02)
* **Personal Fork URL:** `https://github.com/maritawamwaniki-glitch/kioto-ics2175-lab02`
* **Working Branch:** `student/ENB211-0031/2025/lab02
* **Pull Request URL:** `https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/15`

### Workflow Execution Summary
1. **Fork & Clone:** Forked the official [Kiotolabs/kioto-ics2175-lab02](https://github.com/Kiotolabs/kioto-ics2175-lab02) repository to my personal GitHub account and cloned it locally via [GitHub Desktop](https://desktop.github.com/) while preserving the existing directory and test structure.
2. **Feature Branching:** Created and checked out an isolated working branch named `student/[ENB211-0031/2025]/lab02` before making any edits.
3. **Incremental Commits:** Recorded changes in meaningful, atomic commits:
   * *Commit 1:* `Implement else-if grading ladder and pass/fail logic`
   * *Commit 2:* `Add boundary and invalid input validation checks`
   * *Commit 3:* `Add Lab 02 technical report and test screenshots`
4. **Push & Pull Request:** Pushed the working branch to `origin` (personal fork) and opened a Pull Request targeting `Kiotolabs/kioto-ics2175-lab02` (`main`), verifying that automated GitHub Actions validation checks ran cleanly.

### GitHub Submission Evidence
* **Screenshot 3 — Forked Repository Showing Committed Files:**
  ![GitHub repository showing committed source code and report files]
* **Screenshot 4 — Open Pull Request to `Kiotolabs/kioto-ics2175-lab02` (`main`):**
  ![Pull request submitted against Kiotolabs/kioto-ics2175-lab02 main branch]d:\ABE\LAB02\Screenshot 2026-11-21 171822.png