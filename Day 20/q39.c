//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main()
{
    int n, rem, product = 1, found = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;

        if(rem % 2 != 0)
        {
            product = product * rem;
            found = 1;
        }

        n = n / 10;
    }

    if(found == 1)
        printf("product of odd digits = %d\n", product);
    else
        printf("no odd digits\n");

    return 0;
}