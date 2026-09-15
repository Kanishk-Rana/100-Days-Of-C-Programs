//Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, symmetric = 1;

    printf("Enter the matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }

    return 0;
}