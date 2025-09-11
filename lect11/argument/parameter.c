#include<stdio.h>
int sum(int a ){
    if (a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }

}
int main(){

    sum(15);
    return 0;

}
