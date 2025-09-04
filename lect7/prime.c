#include <stdio.h>
int main(){
    int i,a;
    printf("enter a number \n");
    scanf("%d",&a);
    for(i=2;i<a-1;i++){
        if (a%2==0)
        printf("composite\n");
        break;

    }
if(a%2!=0){
    printf("prime \n");}
    
return 0;
}