//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
#include <stdio.h>

int main()
{
    float p;

    printf("enter percentage: ");
    scanf("%f", &p);

    if(p >= 90 && p <= 100)
        printf("grade a\n");
    else if(p >= 80)
        printf("grade b\n");
    else if(p >= 70)
        printf("grade c\n");
    else if(p >= 60)
        printf("grade d\n");
    else if(p >= 0)
        printf("grade f\n");
    else
        printf("invalid percentage\n");

    return 0;
}