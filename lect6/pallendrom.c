#include<stdio.h>
int main(){
    int n,res=0;
    printf("Enter a no. :");
    scanf("%d",&n);
    int num = n;
    while (n!=0)
    {
        int lastdigit = n%10;
        res =res*10 + lastdigit;
        n = n/10;
    }
    if(res==num)
        printf("It is a pallendrom");
    else
        printf("It is not a pallendrom");
    return 0;
}