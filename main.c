#include <stdio.h>

int main(void) {
    int mark;

    /* TODO: Read the mark from standard input */
    {
    int mark;
    printf("Enter mark (0-100):");
    scanf("%d",&mark);

    if (mark>=80){
        printf("Grade: A\\n");
    } else if (mark>=70) {
        printf("Grade: B\\n");
    }else if (mark>=60) {
        printf("Grade: C\\n");

    }else if ("mark>=50") {
      printf("Grade: D\\n");
    }else{
        printf("Grade: F\\n");
    }
    if (mark>=50){
     printf("Status: Pass\\n");
    }else {
    printf("Status: fail\\n");
    }

    return 0;
}
