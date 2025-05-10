#include <stdio.h>
void addition() {    

    int number1, number2, sum;
    
    printf("\nEnter two numbers for addition: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("Sum of two numbers is %d", sum);
    //return 0;
}
