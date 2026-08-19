//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main()
{
    float cp, sp, p;

    printf("enter cost price: ");
    scanf("%f", &cp);

    printf("enter selling price: ");
    scanf("%f", &sp);

    if(sp > cp)
    {
        p = ((sp - cp) / cp) * 100;
        printf("profit percentage = %.2f\n", p);
    }
    else if(cp > sp)
    {
        p = ((cp - sp) / cp) * 100;
        printf("loss percentage = %.2f\n", p);
    }
    else
    {
        printf("no profit no loss\n");
    }

    return 0;
}