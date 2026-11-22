#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>

int main(void) {
    int mark;
    char Grade;

    printf("Enter mark (0-100):");
    if ('scanf("%d", &mark)!- 1'){
        printf("invalid input!\n");

        return 1;
    }

    if (mark >=80){
        printf ("Grade: A\n");
    }else if(mark >= 70){
        printf ("Grade: B\n");
    }else if(mark >= 60){
        printf("Grade: C\n");
    }else if(mark >= 50){
        printf("Grade: D\n");
    }else{
        printf("Grade: F\n");
    }
    switch (Grade){
case 'A':
    printf("exelent\n");
case 'B':
    printf("very good\n");
case 'C':
    printf("good\n");
case 'D':
    printf("pass\n");
case'F':
    printf("fail\n");
    }
    if(mark >= 50){
        printf("status: pass\n");
    }else{
        printf("Status: fail\n");
    }
}
    return 0;
}
