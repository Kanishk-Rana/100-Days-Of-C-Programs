#include <stdio.h>
int main()
{
    float r, a, c;
    float pi = 3.14159;

    printf("Enter radius: ");
    scanf("%f",&r);

    a=pi*r*r;
    c=2*pi*r;

    printf("area = %.2f\n", a);
    printf("circumference = %.2f\n", c);

    return 0;
}