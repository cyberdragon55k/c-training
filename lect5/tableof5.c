#include <stdio.h>
int main(){
    int n,last,sum =0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(;n>0;n=n/10){
        last = n%10;
        sum +=last;
        }
    printf("Sum of digits: %d\n", sum);
    return 0;
}