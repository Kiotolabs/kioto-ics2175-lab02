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
