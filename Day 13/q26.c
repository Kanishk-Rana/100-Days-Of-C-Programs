//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main()
{
    int n, i;

    printf("enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}