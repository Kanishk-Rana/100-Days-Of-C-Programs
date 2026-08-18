//Write a program to display the day of the week based on a number (1–7) using switch-case.

int main()
{
    int n;

    printf("enter day number: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wednesday\n");
            break;
        case 4:
            printf("thursday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("saturday\n");
            break;
        case 7:
            printf("sunday\n");
            break;
        default:
            printf("invalid day number\n");
    }

    return 0;
}