#include <stdio.h>
#include <stdlib.h>
/*
Mark range	Grade	Status
80 – 100	A	    Pass
70 – 79	    B	    Pass
60 – 69	    C	    Pass
50 – 59	    D	    Pass
0 – 49	    F	    Fail
*/

int main()
{
    int mark;
    printf("Enter the score : \n");
    scanf("%d", &mark);
    if (mark >=80){
        printf("Grade: A\n");
    }
    else if (mark >= 70){
        printf("Grade: B\n");
    }
    else if (mark >= 60){
        printf("Grade: C\n");
    }
    else if (mark >= 50){
        printf("Grade: D\n");
    }
    else{
        printf("Grade: F\n");
    }
    return 0;
}
