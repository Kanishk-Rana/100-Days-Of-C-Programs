#include <stdio.h>

int main()
{
    int n, temp, temp2, rem, digits = 0, i;
    int sum = 0, power;

    printf("enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        power = 1;

        for(i = 1; i <= digits; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == n)
        printf("armstrong number\n");
    else
        printf("not armstrong number\n");

    return 0;
}