//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    long long n, temp, rem;
    long long comp = 0, place = 1;

    printf("enter a binary number: ");
    scanf("%lld", &n);

    if(n == 0)
    {
        printf("1's complement = 1\n");
        return 0;
    }

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;

        if(rem == 0)
            rem = 1;
        else
            rem = 0;

        comp = comp + rem * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's complement = %lld\n", comp);

    return 0;
}