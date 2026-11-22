# ICS 2175 - Laboratory 02 Report

## 







\# ICS 2175 - Laboratory 02 Report



\## Student

\* Name: Ndege Nelly NJERI

\* Registration number: ENB211-0010/2025

\* Programme: \[Enter your programme name]

\* Unit: ICS 2175

\* Lab number: Lab 02

\* Date: 20 November 2026



\## Objective

Implement and test selection control structures in C (`if`, `else if`, and `else`) to read an integer mark (0–100), determine the corresponding letter grade (`A`–`F`) and `Pass/Fail` status, and track progress using Git branches, commits, and a pull request.



\## Environment and Setup

\* Operating System: Windows (see System Information / Settings for exact version, e.g., Windows 11)

\* IDE: Code::Blocks 25.03\[cite: 1, 8]

\* Compiler / Toolchain: GNU GCC / MinGW toolchain configured in Code::Blocks



\## Exercise — Selection



\### Source Code (`main.c`)

Paste your final `main.c` code from `kioto-ics2175-lab02` here (including `#include <stdio.h>`, `main()`, `scanf`, `if / else if / else` grade logic, and `Pass/Fail` status check)\[cite: 1, 3].



\### Key Statements

\* `scanf("%d", \&mark);` reads the user's integer score from standard input\[cite: 1].

\* `if (mark >= 80)` through `else if (mark >= 50)` and `else` evaluate thresholds in descending order so each mark maps to one letter grade (`A`, `B`, `C`, `D`, or `F`)\[cite: 1, 3].

\* `if (mark >= 50)` / `else` prints `Status: Pass` for marks 50 and above and `Status: Fail` below 50\[cite: 1].



\### Sample Output

\* Test 1 (e.g., mark `85`): Grade `A`, Status `Pass`

\* Test 2 (e.g., mark `65`): Grade `C`, Status `Pass`

\* Test 3 (e.g., mark `40`): Grade `F`, Status `Fail`



\## Testing and Troubleshooting

\* \*\*File path mismatch with GitHub Desktop:\*\* Editing `main.c` inside `Kioto\_C\_Lab02` did not appear in GitHub Desktop because the repository was cloned at `kioto-ics2175-lab02`\[cite: 1, 2]. Fixed by copying the code into `kioto-ics2175-lab02\\main.c` and saving there.

\* \*\*Boundary check verification:\*\* Tested values around cutoffs (such as `49`, `50`, `59`, `60`, `79`, `80`) to confirm `>=` operators handle exact threshold marks accurately.



\## GitHub Workflow

\* Repository URL: \[Paste your GitHub repository URL]

\* Branch name: `student/ENB211\_0010/2025/lab02`\[cite: 2, 3]

\* Commit summary: `Complete selection exercises in main.c` and `Complete lab report` (at least three meaningful commits on the branch)

\* Pull request URL: \[Paste your Pull Request URL once opened]



\## Reflection

\* \*\*What I learned:\*\* Using multi-branch `if / else if` selection for mutually exclusive ranges and managing staged changes across commits on a feature branch in GitHub Desktop.

\* \*\*What was difficult:\*\* Keeping track of which folder was linked to GitHub Desktop and opening `REPORT.md` smoothly while working between Code::Blocks, Notepad, and OneDrive\[cite: 1, 5, 7].

\* \*\*What I would do differently:\*\* Open the exact repository folder from the start and verify changes in GitHub Desktop after each edit before moving to the next step.



\## Conclusion

I achieved the lab objectives by implementing the selection grading and pass/fail logic in `main.c`, testing boundary cases, documenting the work in `REPORT.md`, and committing the changes on the required branch.



\## Evidence

\* Code::Blocks project and `main.c`: \[Add screenshot link or note]

\* Program output (at least three test cases): \[Add screenshot link or note]

\* GitHub repository files: \[Add screenshot link or note]

\* Pull request: \[Add PR link or screenshot link]



















































