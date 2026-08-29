#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 1, power = 1, middle, result;

    printf("enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for(int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    middle = (n % power) / 10;
    result = last * power + middle * 10 + first;

    printf("number after swapping = %d\n", result);

    return 0;
}