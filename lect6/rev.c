#include <stdio.h>
int main(){
    int n,last,sum =0,res;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(;n>0;n=n/10){
        
        last = n%10;
        res=res*10+ last;
        
        }
    printf("reverse of the number is %d\n", res);
    return 0;
}