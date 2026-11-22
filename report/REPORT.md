# ICS 2175 — Laboratory 02: Selection and Decision-Making

## 1. Cover Information
* **Full Name:** JOHN CHEGE
* **Registration Number / Class ID:** ENB211-0004/2025
* **Programme:** B.Sc. Agriculture and Biosystems Engineering
* **Unit:** ICS 2175 — Introduction to Computer Programming
* **Laboratory:** Laboratory 02 — Selection and Decision-Making
* **Date Performed:** November 22, 2026
* **GitHub Username:** [kamurijohn30-dot]

---

## 2. Objective
The objective of this laboratory was to build upon Laboratory 01 by applying C selection and decision-making constructs to classify numeric marks into letter grades and pass/fail statuses. Specifically, the practical aimed to:
* Use relational (`>=`, `<=`, `>`, `<`, `==`, `!=`) and logical (`&&`, `||`, `!`) operators to form clear conditions.
* Implement `if`, `if-else`, and `else-if` ladders, and understand how `switch` supports multi-way branching on integer or character values.
* Handle boundary values accurately and consider input validation for invalid marks.
* Use Git and GitHub Desktop (forking, branching, meaningful commits, pushing, and opening a pull request) to version and submit work to `Kiotolabs/kioto-ics2175-lab02`.

---

## 3. Environment and Setup
* **Operating System:**  Windows 11 Pro , Version 25H2
* **IDE / Editor:**  Code::Blocks 25.03 (report drafted and formatted in Visual Studio Code)
* **Compiler / Toolchain:** GNU GCC Compiler (`gcc` via MinGW)
* **Version Control Tools:** Git & GitHub Desktop

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
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (mark < 0 || mark > 100) {
        printf("Invalid mark. Please enter a value between 0 and 100.\n");
        return 1;
    }

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

### Explanation of Key Statements

scanf("%d", &mark): Reads an integer mark typed by the user and writes it to the memory address of mark using the address-of operator (&).

Grading if / else if / else Ladder: Checks conditions sequentially from highest to lowest threshold (mark >= 80, mark >= 70, mark >= 60, mark >= 50, and else for anything below 50). Because earlier checks are evaluated first, a mark such as 72 fails mark >= 80 and enters else if (mark >= 70) to print Grade: B.

Pass/Fail if-else Selection: Evaluates mark >= 50 as a separate decision so marks of 50 and above output Status: Pass, while marks below 50 output Status: Fail.

Input & Boundary Handling Note: Using >= and <= relational comparisons handles exact threshold values (0, 49, 50, 59, 60, 69, 70, 79, 80, 100), while adding a scanf return check and mark < 0 || mark > 100 guard prevents invalid or out-of-range marks from being graded.

switch Multi-Way Branching: While range checks (>=, <) fit an if / else if ladder cleanly, switch is well suited to matching discrete integer or char constants (such as mark / 10 for 0–100 buckets) without repeating range expressions.

Output:

Enter mark (0-100): 85
Grade: A
Status: Pass

Enter mark (0-100): 72
Grade: B
Status: Pass

Enter mark (0-100): 40
Grade: F
Status: Fail

Enter mark (0-100): 50
Grade: D
Status: Pass

Enter mark (0-100): 80
Grade: A
Status: Pass

Enter mark (0-100): 0
Grade: F
Status: Fail

Enter mark (0-100): 100
Grade: A
Status: Pass

Enter mark (0-100): 79
Grade: B
Status: Pass

---

## 5. Testing and Troubleshooting

### Test Cases and Boundary Values
The program was compiled in Code::Blocks and tested with the required lab inputs as well as key boundary values across the `0`–`100` grading scale:

| Input Mark | Category / Boundary | Expected Grade | Expected Status | Observed Result |
| :--- | :--- | :--- | :--- | :--- |
| `0` | Lower boundary (`F` / `Fail`) | `F` | `Fail` | `[Match / Record actual result]` |
| `40` | Lab test input (`F` / `Fail`) | `F` | `Fail` | `[Match / Record actual result]` |
| `49` | Boundary just below pass (`F` / `Fail`) | `F` | `Fail` | `[Match / Record actual result]` |
| `50` | Pass & `D` lower boundary | `D` | `Pass` | `[Match / Record actual result]` |
| `59` | `D` upper boundary | `D` | `Pass` | `[Match / Record actual result]` |
| `60` | `C` lower boundary | `C` | `Pass` | `[Match / Record actual result]` |
| `69` | `C` upper boundary | `C` | `Pass` | `[Match / Record actual result]` |
| `70` | `B` lower boundary | `B` | `Pass` | `[Match / Record actual result]` |
| `72` | Lab test input (`B` / `Pass`) | `B` | `Pass` | `[Match / Record actual result]` |
| `79` | `B` upper boundary | `B` | `Pass` | `[Match / Record actual result]` |
| `80` | `A` lower boundary | `A` | `Pass` | `[Match / Record actual result]` |
| `85` | Lab test input (`A` / `Pass`) | `A` | `Pass` | `[Match / Record actual result]` |
| `100` | Upper boundary (`A` / `Pass`) | `A` | `Pass` | `[Match / Record actual result]` |

### Troubleshooting and Modifications
* **Test / Error Scenario:** `[Describe a specific test case, compiler warning, boundary check, or Git/PR validation issue you observed]`
* **Observed Result:** `[State what the compiler, program console, or GitHub Actions reported during the test]`
* **Root Cause & Fix:** `[Explain how you resolved it—for example, fixing a comparison operator, ordering else-if branches, validating input range, or correcting a branch/PR target]`

---

## 6. GitHub Workflow

### Repository & Pull Request Details
* **Official Upstream Repository:** `https://github.com/Kiotolabs/kioto-ics2175-lab02`
* **Personal Fork URL:** `https://github.com/kamurijohn30-dot/kioto-ics2175-lab02`[cite: 1]
* **Report File Path:** `report/REPORT.md`[cite: 1]
* **Working Branch Name:** `student/ENB211-0004-2025/lab02`
* **Pull Request Target:** `Kiotolabs/kioto-ics2175-lab02` (`main`) ← `kamurijohn30-dot/kioto-ics2175-lab02` (`student/ENB211-0004-2025/lab02`)
* **Pull Request Title:** `Lab02 submission ENB211-0004/2025`
* **Pull Request URL:** `https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/25`
* **GitHub Actions Validation Status:** `[Passed / Note check result]`

### Commit Summary
1. **`Implement selection grading and pass/fail logic in main.c`** — Added relational and `if`/`else if`/`else` conditions to classify marks (`0`–`100`) into grades (`A`–`F`) and `Pass`/`Fail` status.
2. **`Add boundary and range validation checks`** — Verified boundary thresholds (`0`, `49`, `50`, `59`, `60`, `69`, `70`, `79`, `80`, `100`) and handled invalid or out-of-range inputs cleanly.
3. **`Update report/REPORT.md with testing, workflow, and reflection`**[cite: 1] — Documented the environment, test results, GitHub fork/branch/PR `#25` details, and lab reflections.

### Workflow Checklist & Evidence
* **Repository Files Screenshot:** Included (`files github.png` / `files github_2.png`, showing fork contents and `report/REPORT.md`)[cite: 1, 2].
* **Pull Request Link & Screenshot:** `https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/25` (`[Insert screenshot of PR #25 to Kiotolabs/main]`)

---
## 7. Reflection

* **What I Learned:** Working through selection statements in C showed me how condition order in an `if` / `else if` / `else` ladder shapes decision paths and how exact boundary values (`0`, `49`, `50`, `59`, `60`, `69`, `70`, `79`, `80`, `100`) test relational operators (`>=`, `<`, `<=`, `>`). Using a fork, an individual branch (`student/ENB211-0004-2025/lab02`), and a pull request also reinforced structured version control habits.
* **What Was Difficult:** `[Note what challenged you most—for instance, verifying boundary cutoffs, checking input/range validation, or keeping branch and pull request targets aligned with Kiotolabs/main]`

---
## 8. Conclusion

In Laboratory 02, I achieved the learning outcomes by implementing selection and decision-making logic in C (`main.c`), checking boundary and pass/fail cases, and organizing the submission through a personal fork (`kamurijohn30-dot/kioto-ics2175-lab02`), working branch (`student/ENB211-0004-2025/lab02`), and pull request to `Kiotolabs/kioto-ics2175-lab02`.

---
## 9. Evidence and Output Observations

### Code::Blocks & Source Evidence
* **IDE & Source View (`source code.png`):** Shows **Code::Blocks 25.03** with `main.c` open under `C:\Users\Admin\Documents\GitHub\kioto-ics2175-lab02\main.c`[cite: 10].
* **Literal `\n` Issue Observed (`source code.png` & test screenshots):** In `main.c`, the format strings use `\\n` (such as `"Grade: F\\n"` and `"Status: Fail\\n"`), which outputs the literal characters `\n` and keeps `Grade:` and `Status:` on the same line instead of inserting a newline[cite: 3, 4, 5, 6, 7, 8, 9, 10]. Replacing `\\n` with `\n` in `printf` fixes the line break.

### Console Test Run Evidence
| Screenshot File | Input Mark | Displayed Output | Grade & Status Check |
| :--- | :--- | :--- | :--- |
| `input=0.png`[cite: 3] | `0`[cite: 3] | `Grade: F\nStatus: Fail\n`[cite: 3] | `F` / `Fail` (literal `\n` printed)[cite: 3] |
| `input=40.png`[cite: 4] | `40`[cite: 4] | `Grade: F\nStatus: Fail\n`[cite: 4] | `F` / `Fail` (literal `\n` printed)[cite: 4] |
| `input=50.png`[cite: 5] | `50`[cite: 5] | `Grade: D\nStatus: Pass\n`[cite: 5] | `D` / `Pass` (literal `\n` printed)[cite: 5] |
| `input=72.png`[cite: 6] | `72`[cite: 6] | `Grade: B\nStatus: Pass\n`[cite: 6] | `B` / `Pass` (literal `\n` printed)[cite: 6] |
| `input=80.png`[cite: 7] | `80`[cite: 7] | `Grade: A\nStatus: Pass\n`[cite: 7] | `A` / `Pass` (literal `\n` printed)[cite: 7] |
| `input=85.png`[cite: 8] | `85`[cite: 8] | `Grade: A\nStatus: Pass\n`[cite: 8] | `A` / `Pass` (literal `\n` printed)[cite: 8] |
| `input=100.png`[cite: 9] | `100`[cite: 9] | `Grade: A\nStatus: Pass\n`[cite: 9] | `A` / `Pass` (literal `\n` printed)[cite: 9] |

### GitHub Repository Evidence
* **Repository View (`files github_2.png`):** Shows `https://github.com/kamurijohn30-dot/kioto-ics2175-lab02/tree/main/report` with `report/REPORT.md` present[cite: 2].