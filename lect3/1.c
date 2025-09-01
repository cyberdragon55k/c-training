#include <stdio.h>
int main(){

    int marks;
    int atten;
    printf("Enter the marks :");
    scanf("%d",&marks);
    printf("Enter the attendence:");
    scanf("%d",&atten);

    // if both attendence and marks are above 75% then A+ will be given
    if(marks>=75 && atten >=75){
        printf("A+");
    }

    else if (marks<=65 && marks>=50 && atten >= 60 ){
        printf("B");

    }
    else if (marks<40 && marks>0 && atten <40 ){
        printf("C");
    }

    else {
        printf("fail");
    }

    return 0;
}



