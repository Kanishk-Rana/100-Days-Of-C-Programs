//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    int sum =a+b;
    int difference =a-b;
    int product =a*b;
    int quotient =a/b;
    
    printf("sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product: %d\n", product);
    printf("quotient: %d\n", quotient);
    
    return 0;
}