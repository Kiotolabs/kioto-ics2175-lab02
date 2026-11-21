int main(){
int mark;

    printf(" 40:");
    scanf("40%",40);

    if (mark >=80){
    printf("Grade:A\\n");
    }else if (mark >=70){
    printf("Grade:B\\n");
    }else if (mark >=60){
    printf("Grade:C\\n");
    }else if (mark>=50){
    printf("Grade:D\\n");
    }else {
    printf("Grade:F\\n");
    }
    if(mark >=50){
        printf("status:Pass\\n");
    }else {
    printf("status:Fail\\n");
    }
    return 0;
}