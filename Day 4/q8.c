#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("sum = %d\n", sum);

    return 0;
}