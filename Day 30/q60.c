#include <stdio.h>

int main()
{
    int a[100], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("positive = %d\n", positive);
    printf("negative = %d\n", negative);
    printf("zero = %d\n", zero);

    return 0;
}