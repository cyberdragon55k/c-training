#include <stdio.h>
int main(){
    for (int i =0;i<9;i++){
        if(i==3){
            continue;

        }
        printf("%d",i);
    }
    return 0;
}