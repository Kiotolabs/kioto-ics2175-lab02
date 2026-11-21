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

## 5. Testing and Troubleshooting

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

Errors I encountered and fixed:
'\\n' in the printf strings: I had copied the double backlash from the lab sheet, which prints a literal \n instead of a new line. I changed it to \n.
Layout: Some closing braces were attached to the next 'if'. I moved them onto their own lines to make the code easier to read.

## 6. Github workflow
Fork URL:https://github.com/mukamimuriuki-ui/kioto-ics2175-lab02
Branch: student/ENB211-0011-2025/lab02
Commits: main.c, Complete_Report, Add screenshots to report
Pull request URL: 
Github Actions result: 

I forked the official Kiotolabs repository,cloned my fork,created my branch,committed the changed files,pushed origin and opened a pull request to Kiotolabs//kioto-ics2175-lab02(main).

## 7. Reflection
I learnt that an 'else if' ladder stops at the first true condition, so the order of conditions matter. I also learned how || is used for validation and how the fork,branch and pull request workflow fits together.
I found it difficult to spot small syntax mistakes.
Next time I will test boundary values as I go and create my branch before editing supplied files.

## 8. Conclusion
I met the objectives.My program compiled and correctly gave the grade and status for all boundary values,rejected invalid marks and I submitted it through a pull request from my fork.