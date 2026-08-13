//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, ci, amount;

    printf("enter principal: ");
    scanf("%f", &p);

    printf("enter rate: ");
    scanf("%f", &r);

    printf("enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("simple interest = %.2f\n", si);
    printf("compound interest = %.2f\n", ci);

    return 0;
}