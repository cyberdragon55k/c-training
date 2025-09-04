#include <stdio.h>
int main(){
    int n,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0){
        count =1;
    }

while (n>0){count++;
n=n/10;
printf(count);
}

    return 0;
}

