#include <stdio.h>

int main()
{
    int a[100], n, i, even = 0, odd = 0;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("even numbers = %d\n", even);
    printf("odd numbers = %d\n", odd);

    return 0;
}