

#include <stdio.h>

int main() {


    int age = 20;       
    float pi = 3.14;   
    char grade = 'A';   

    printf("Age = %d\n", age);     
    printf("Pi = %.2f\n", pi);     
    printf("Grade = %c\n\n", grade); 


    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("You entered: %d\n\n", a);


    int x = 10, y = 3;
    printf("x + y = %d\n", x + y);   
    printf("x - y = %d\n", x - y);  
    printf("x * y = %d\n", x * y);   
    printf("x / y = %d\n", x / y);   
    printf("x %% y = %d\n\n", x % y); 


    float result = (float)x / y; 
    printf("Type casted division: %.2f\n\n", result);


    int num = 5;
    printf("num = %d\n", num);
    printf("num++ = %d (post-increment)\n", num++); 
    printf("Now num = %d\n", num);
    printf("++num = %d (pre-increment)\n", ++num); 
    printf("Now num = %d\n\n", num);


    int marks = 73;
    if (marks >= 75) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else {
        printf("Fail\n");
    }


    printf("\nSize of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of char = %zu bytes\n\n", sizeof(char));


    int ascii = 65;
    char ch = ascii;
    printf("ASCII value %d = character '%c'\n", ascii, ch);

    return 0;
}



