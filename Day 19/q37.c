//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main()
{
    int a, b, max, lcm;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        max = a;
    else
        max = b;

    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }

        max++;
    }

    printf("lcm = %d\n", lcm);

    return 0;
}