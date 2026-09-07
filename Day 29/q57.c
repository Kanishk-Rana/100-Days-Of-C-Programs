//Find the sum of array elements.
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("sum = %d\n", sum);

    return 0;
}