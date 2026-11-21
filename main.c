#include <stdio.h>

int main(void) {
    int mark;

    printf("Enter mark 0- 100): ");
    scanf("%d", &mark);

    if (mark >= 80 && mark <= 100) {
        printf("Grade: A\\n");
    } else if (mark >= 70 && mark <= 79) {
        printf("Grade: B\\n");
    ] else if (mark >= 60 && mark <= 69) {
        printf("Grade: C\\n");
    } else if (mark >= 50 && mark <= 59) {
        printf("Grade: D\\n");
    } else {
        printf("Grade: F\\n");
    }

    if (mark >= 50) {
        printf("status: pass\\n");
    }else {
        printf("status: fail\\n");
    }


    return 0;
}
