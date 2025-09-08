#include <stdio.h>
int main(){
    for(int i =0;i<3;i++){
        for(int j=i; j<3;j++){
            printf("*");
        }
        //we will use next line \n outside the first loop
        printf("\n");
    }

    return 0;
}