#include <stdio.h>

int main()
{
    int a[100], n, i, x;
    int low, high, mid, found = 0;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter sorted elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter element to search: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            printf("element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(x < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
        printf("element not found\n");

    return 0;
}