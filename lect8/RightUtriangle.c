#include <stdio.h>
int main(){
    for(int i =0;i<3;i++){
        for(int j=3; j>i;j--){
            printf("*");
        }
        //we will use next line \n outside the first loop
        printf("\n");
    }

    return 0;
}