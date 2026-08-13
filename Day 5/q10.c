#include <stdio.h>

int main()
{
    int total, h, m, s;

    printf("enter time in seconds: ");
    scanf("%d", &total);

    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    printf("time = %d:%d:%d\n", h, m, s);

    return 0;
}