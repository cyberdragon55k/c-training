#include <stdio.h>


int main(){

    int a ;
    printf("enter a number between 1 to 7 :");
    scanf("%d",&a);
    // a<4?printf("hello"):printf("hiiiiiiiiiii");
    switch (a){
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;

        default:
            printf("ENTER in 1 to 7 range");
            break;
        

    }



    return 0;
}