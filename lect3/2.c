#include <stdio.h>
int main(){
    int a ;
    int b;
    printf("enter the first number ");
    scanf("%d",&a);
    printf("enter the second");
    scanf("%d",&b);
    if(a>b){
        printf("A is greater then b %d",a);

    }
    else {
        printf("b is greater then a%d",b);
    }

    return 0;

}
