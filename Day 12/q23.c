#include <stdio.h>

int main()
{
    int days;
    float fine;

    printf("enter late days: ");
    scanf("%d", &days);

    if(days <= 5)
    {
        fine = days * 2;
        printf("fine = %.2f\n", fine);
    }
    else if(days <= 10)
    {
        fine = 5 * 2 + (days - 5) * 4;
        printf("fine = %.2f\n", fine);
    }
    else if(days <= 30)
    {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("fine = %.2f\n", fine);
    }
    else
    {
        printf("membership cancelled\n");
    }

    return 0;
}