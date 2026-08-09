// Write a program to input two numbers and display their sum.
#include <stdio.h>

int main() 
{
    int num1, num2, sum;
    
    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("Sum = %d\n", sum);
    
    return 0;
}