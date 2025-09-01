#include<stdio.h>
int main(){
    float a,b,result;
    char ch;
    printf("Enter a two no:");
    scanf("%f %f",&a,&b);
    printf("Enter a operation:");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
        result=a+b;
        break;
    case '-':
        result=a-b;
        break;
    case '*':
        result=a*b;
        break;
    case '/':
        if(b==0){
            printf("Division is not possible");
            return 1;
        }
        result=a/b;
        break;   
    default:
        printf("Kuch nahi..bad me milte he");
    }
    printf("%.2f",result);
    
    
    return 0;
}