# ICS 2175 - Laboratory 02 Report

## Student
- Name: Joan Nyokabi
- Registration number:ENB211-0014/2025
- Programme:BSc. Agricultural and Biosystems Engineering
-Unit:ICS2175 Computer Programming 1
-Date:21/11/2026
-Github Uername: JMurungi

## OBJECTIVES
This practical is aimed at understanding the concept and application of decision making statements in programming such as if,else-if and if-else. Also to apply the decision makin statements to control the flow of a program. The exercise includes :1.Writing a program that accepts a student's marks as input.2.Use of the stated conditional statements against defined grading criteria. 3.Implement grading logic to assign appropriate grades according to marks obtained. 4.Display the students marks and determine the correct grade. 5. Identify and handle invalid marks that are outside the range 0-100.

##ENVIRONMENT AND SET-UP
-Windows Version : Windows 11
-Complier : GNU GCC
-Hardware:

##EXERCISE
The exercise provided involved writing a program that requires input value for grades and would then display the appropriate grade and give either a pass or fail status as long as it satisfies the condition staements provided.
The mark ranges were as provided.
Mark range      Grade         Status
80-100          A              Pass
70-79           B              Pass
60-69           C              Pass
50-59           D              Pass
0-49            F              Fail
The program was as follows;
#include <stdio.h>

int main(void)
{
    int mark;

    printf("Enter mark(0-100): ");
    scanf("%d",&mark);

    if(mark>=80){
        printf("Grade:A\\\n");
    }else if (mark>=70){
        printf("Grade:B\\n");
    }else if (mark>=60){
        printf("Grade:C\\n");
    }else if (mark>=50){
        printf("Grade:D\\n");
    }else{
        printf(Grade:F\\n);
        }

    if(mark>=50){
        printf("Status: Pass\\n");
    } else {
        printf("Status:Fail\\n");
        }
    return 0;
}
The output was; "Enter mark: "upon mark entry the grade and status was displayed i.e for mark 55 it was Grade: F\\Pass.
if checks a condition, if the condition is true the block runs if false the program skips to the next block.
else if is used to check after if, to check another condition if another was false. It can be used multiple times.
else is used alongside if to define alternative action when the condition in the if statements evaluate false. It has single occurence and has no comndition.
scanf("%d", &mark)reads an integer from the user.
The following comparison operators are used to compare values;
< for less than
> for greater than
<= for less than or equal to
>= for greater than or equal to
== for equal to
!= for not equal to
##Evidence
the following shows screenshots of work done:"C:\Users\user\OneDrive\Documents\kioto-ics2175-lab02\screenshots"
##Troubleshooting and Testing
I tried value inputs that fall outside the 0-100 range such as -5 and 110.The -5 value, though outside the range displayed grade F and status Fail, value 110 showed Grade A and status Pass.
This is because in the condition mark>=80 includes the value 110 since it is greater than 80 thus a grade is displayed. also if mark>=50 to display pass includes 110.
The value -5 will fall under the else statement and grade F is displayed and status Fail is displayed.

##GitHub Workflow
-Resporitory URL :https://github.com/Jmurungi/kioto-ics2175-lab02
-Branch name :student/ENB211-0014/2025/lab02
-Commit Summary :
-Pull request URL :

##Reflection
I learnt about conditional statements such as if,else if and else . I also learnt the use of operation operators in conditional statements.
I also learnt the use of indentation for correct execution in conditional statements.
I also learnt about logical operators: AND(&&)returns true only if both conditions are true , OR(||)returns true if at least one condition is true , NOT(!) reverses a boolean value.
For this exercise what i would do differently is change the first condition from (mark>=80) to (mark>=80 and mark<=100) so that includes values to a maximum of a hundred and thus the testing and troubleshooting would proove true.
##Conclusion
The program was successfully executed and several inputs proved true for student marks input.
Conditional statements were used successfully for marks 0-100.
Grading logic was successfully implemented to display status fail and pass.
Testing was also done for values outside the 0-100 i.e -5,110.



