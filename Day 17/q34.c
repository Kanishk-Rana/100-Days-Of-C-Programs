//Write a program to check if a number is prime.
#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("not prime\n");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(n % i == 0)
                count++;
        }

        if(count == 2)
            printf("prime number\n");
        else
            printf("not prime\n");
    }

    return 0;
}
