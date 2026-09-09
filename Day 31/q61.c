//Search for an element in an array using linear search.
#include <stdio.h>

int main()
{
    int a[100], n, i, x, found = 0;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("element not found\n");

    return 0;
}