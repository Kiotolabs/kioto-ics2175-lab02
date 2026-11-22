# ICS 2175 - Laboratory 02 Report

## Student
- Name: JOSEPH KIMANI
- Registration number: ENB211-0023/2025
- Programme: BsE.AGRICULTURAL AND BIOSYSTEMS ENGINEERING
-unit:ics2175
-Lab no:Lab02
-date:22november2026

## objective

The objective of this lab was to practice writing, compiling, and testing C programs that use conditional selection statements (if, else if, and else) to make decisions based on user input, assign letter grades and pass/fail status across score ranges and boundary values, and manage the submission through a Git and GitHub workflow.

## enviroment and setup

Operating System: Windows 

IDE: Code::Blocks 25.03  Toolchain: GNU GCC Compiler via Code::Blocks MinGW 

  Project Name & Path: Kioto_C_Lab01 (C:\Users\Administrator\OneDrive\Documents\Kioto_C_Lab0
  
  ##exercise

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

 explanation:

#include <stdio.h>: Includes the standard input/output header so printf and scanf can be used.

int mark; and scanf("%d", &mark);: Declares an integer variable mark and reads an integer entered by the user into its memory address (&mark).

Chained if / else if / else for Grading: Evaluates conditions from highest (>= 80) to lowest (>= 50), assigning A (80–100), B (70–79), C (60–69), D (50–59), or F (< 50). Because else if stops after the first true condition, overlapping upper thresholds do not need upper-bound checks.

Separate if / else for Pass/Fail: Checks mark >= 50 independently to print Status: Pass for marks of 50 and above, or Status: Fail for marks below 50.
Enter mark (0-100): 85
Grade: A
Status: Pass

##testing and troubleshooting

Console Closed While Waiting for Input (-1073741510):Observed Result: During a Code::Blocks run, the build log reported Process terminated with status -1073741510 after waiting for input at scanf("%d", &mark).   Cause & Fix: Exiting/closing the console window before entering a number and pressing Enter terminates the process with status -1073741510 (0xC000013A). Running the program (Ctrl + F10), typing a valid integer in the console window, and pressing Enter allows normal execution to complete.

##github workflow

Repository URL: (https://github.com/Kiotolabs/kioto-ics2175-lab02)

Branch Name: student/ENB211-0023/2025/lab02

Commit Summary: Commit"complete selection exercises" (+24 additions, -7 deletions, no merge conflicts)

Pull Request URL: (https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/35) 

##reflection

How if / else if / else chains evaluate conditions sequentially, why ordering thresholds from highest to lowest simplifies grade assignment, and how to test boundary values around cutoffs like 50, 70, and 80.

What Was Difficult: Making sure input was properly submitted in the console window during testing and keeping code formatting, prompts, and boundary logic clean and warning-free.

What I Would Do Differently: Check for typos in printf strings before building, test boundary values systematically on every run, and verify the full diff in GitHub before opening or updating a pull request.

##Conclusion

The lab objectives were achieved: the selection program in main.c reads a mark, classifies grades (A through F) and pass/fail status across required test and boundary inputs, and was committed and pushed to GitHub in Pull Request #35 (https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/35)).