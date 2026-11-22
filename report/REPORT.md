# ICS 2175 - Laboratory 02 Report

## 1. Cover Information
- Name: MURIUKI RISPER MUKAMI
- Registration number: ENB211-0011/2025
- Programme: Bsc in Agricultural and Biosystems E ngineering
- Unit: ICS 2175 Inroduction to Computer Programming
- Lab number: laboratory 02
- Date: 21/11/2026
 
## 2. Objective
The objectives of this lab were;
To learn how to use relational and logical operators to build conditions.
To learn how to use if/else if ladders to clasify a mark into a grade and a Pass/Fail status.
To practise input validation and to use Git and Github (fork,branch,commits and pull requests) to submit my work.

## 3. Environment and Setup
**Operating system: Windows 11
**IDE: Code::Blocks (25.03)
**Compiler: GCC 14.2.0 (MinGW-W64 x86_64-ucrt-posix-seh)
I created the project in Code::Blocks, cloned my fork with Github Desktop and edited the suppied main.c.

![source file](<../../../Screenshots/project and source file.png>)

## 4. Exercise - Selection

#include <stdio.h>

int main(void)
{
int mark;

printf("Enter mark (0-100): ");
scanf("%d", &mark);
if (mark < 0 || mark > 100){
    printf("Invalid mark: must be between 0 and 100\n");
    return 1;
}
  if (mark >= 80) {printf("Grade: A\n");

} else if (mark >= 70) {printf("Grade: B\n");

} else if (mark >= 60) {printf("Grade: C\n");

} else if (mark >= 50) {printf("Grade: D\n");

} else {
     printf("Grade: F\n");
}
  if (mark >= 50) {
    printf("Status: Pass\n");
} else{
 printf("Status: Fail\n");
}
 return(0);
}

* scanf("%d" , &mark); reads the mark entered by the user.
* if (mark < 0 || mark > 100) uses the logical OR operator to reject marks outside 0-100, prints and error and ends the program.
* The if/else if ladder checks from 80 down to 50, so only one grade is printed. The final else gives F.
* A second if (mark >= 50) prints Pass,otherwise Fail.

![main.c Input](../../../Screenshots/Input.png)
![proram Output for mark 85](<../../../Scrrenshots/Output 8.png>)

# Improved version (improve.c) 
After the lecturer's update, I added a separate file, 'improve.c', and kept 'main.c' unchanged.

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
    if (mark < 0 || mark > 100){
        printf("Invalid mark! Enter 0-100.\n");
        return 1;
    }
    if (mark >= 80){
        grade = 'A';
    } else if (mark >= 70){
        grade = 'B';
    } else if (mark >= 60){
        grade = 'C';
    } else if (mark >= 50){
        grade = 'D';
    } else{
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
       case'C':
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
**What is new compared with main.c:**
- 'char grade;' stores the grade as a letter . The elde-if ladder runs once to set it, and the grade is then printed with '%c'.
- 'switch (grade)' prints the comment for each grade (Excellent, Very good, Good, Pass, Fail). Each 'break' stops the program running into the next case.
- 'scanf("%d", &mark) != 1' rejects non-numeric input such as 'abc'.
- 'mark < 0 || mark > 100' rejects marks outside the range.
![output for mark 85](<../../../Screenshots/Test 1.png>)
![output for mark 49](<../../../Screenshots/Test 2.png>)
![output for mark 101](<../../../Screenshots/Test 3.png>)


## 5. Testing and Troubleshooting
### Testing main.c
| Test | Input mark | Expected grade | Expected status | Actual output | Result |
|---|---|---|---|---|---|
| 1 | 85 | A | Pass | Grade: A, Status: Pass | Pass |
| 2 | 72 | B | Pass | Grade: B, Status: Pass | Pass |
| 3 | 40 | F | Fail | Grade: F, Status: Fail | Fail |
| 4 | 50 | D | Pass | Grade: D, Status: Pass | Pass |
| 5 | 80 | A | Pass | Grade: A, Status: Pass | Pass | 
| 6 | 0 | F | Fail | Grade: F, Status: Fail | Fail | 
| 7 | 100 | A | Pass | Grade: A, Status: Pass | Pass | 
| 8 | 79 | B | Pass | Grade: B, Status: Pass | Pass | 
| 9 | -5 | Invalid | n/a | Invalid mark: must be between 0 and 100 | n/a |
| 10 | 101 | Invalid | n/a | Invalid mark: must be between 0 and 100 | n/a |

![Output for mark 40](<../../../Screenshots/Output 1.png>)
![Output for mark 50](<../../../Screenshots/Output 2.png>)
![Output for mark 0](<../../../Screenshots/Ouput 3.png>)
![Output for mark 100](<../../../Screenshots/Ouput 4.png>)
![Output for mark 79](<../../../Screenshots/Output 5.png>)
![Output for mark -5](<../../../Screenshots/Output 6.png>)
![Output for mark 101](<../../../Screenshots/Output 7.png>)

### Testing improve.c

| Test input | Expected output | Actual output | Result |
|---|---|---|---|
| 85 | Grade A, Excellent, Pass | [Grade A, Excellent, Pass] | [Pass] |
| 49 | Grade F, Fail, Fail | [Grade F, Fail, Fail] | [Fail] |
| 101 | Invalid mark message | [Invalid mark! Enter 0-100] | 
| abc | Invalid input message | [Invalid input!] |

### Errors and how I fixed them

- **Missing `else`:** one condition in my first version began with `if (mark >= 60)` instead of `else if`. This starts a separate chain, so a mark such as 85 would print two grades. I changed it to `else if`.
- **`\\n` in printf:** I copied the double backslash from the lab sheet, so the program printed a literal `\n`. I changed it to `\n`.
- **Compile error in improve.c:** the build failed with "expected expression before '>' token" on line 15. I had written `mark < 0 || > 100` and left out `mark` after `||`. I changed it to `mark < 0 || mark > 100`, and the build then succeeded with 0 errors.

## 6. Github workflow
Fork URL:https://github.com/mukamimuriuki-ui/kioto-ics2175-lab02
Branch: student/ENB211-0011-2025/lab02
Commits: main.c, Complete_Report, Add PR link and screenshot to report, Add improve.c with switch statement, Update report with improve.c and screenshots.
Pull request URL: https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/16
Github Actions result: ![Actions-run-49](<../../../Screenshots/Actions Result.png>)
The Github Actions workflow for my pull request(#16) showed 'Action required': awaiting approval from a maintainer', si it did not run. 

I forked the official Kiotolabs repository,cloned my fork,created my branch,committed the changed files,pushed origin and opened a pull request to Kiotolabs//kioto-ics2175-lab02(main).

## 7. Reflection
**What I learned**
- An else-if ladder stops at the first true condition, so the order matters. I check from 80 downwards so each mark gets only one grade.
- A missing `else` turns one ladder into two separate chains, so a mark like 85 would print two grades.
- `||` lets me validate input: `mark < 0 || mark > 100` rejects marks outside 0-100, and `scanf(...) != 1` rejects text such as `abc`.
- In `improve.c`, `switch` is a neat way to choose between fixed values, and each `break` stops it running into the next case.
- I learned the Git workflow: fork, clone, branch, commit, push and pull request. I also learned that GitHub Actions on a fork needs a maintainer's approval before it runs.

**What was difficult**
- Finding the right repository and understanding that my fork URL starts with my username.
- Spotting small syntax mistakes. In `improve.c` I left out `mark` in `mark < 0 || mark > 100`, and the compiler reported "expected expression before '>' token". Reading the line number in the build log helped me find it.

**What I would do differently**
- Type the code carefully instead of copying from the PDF, since that is where the `\\n` mistake came from.
- Create my branch before editing, commit in smaller steps, and test the boundary values as I go.
- Check which branch is active in GitHub Desktop before creating a pull request.

## 8. Conclusion
I achieved the objectives of this lab. I used relational and logical operators and an if / else-if ladder to classify a mark into a grade and a Pass/Fail status, and I added input validation for marks outside 0-100 and for non-numeric input. Both `main.c` and the improved `improve.c` (which adds a `switch` statement) compile with no errors and gave the correct results for the boundary values I tested. I submitted my work through a pull request (#16) from my fork to the Kiotolabs repository, using my own branch and several commits. The GitHub Actions check was waiting for maintainer approval, so I relied on my local testing in Code::Blocks.