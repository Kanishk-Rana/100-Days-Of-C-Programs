//Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");

    return 0;
}