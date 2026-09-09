//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};
    int digit, i, max = 0, ans = 0;

    printf("enter a number: ");
    scanf("%lld", &n);

    if(n == 0)
        count[0]++;

    while(n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i <= 9; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            ans = i;
        }
    }

    printf("most occurring digit = %d\n", ans);

    return 0;
}