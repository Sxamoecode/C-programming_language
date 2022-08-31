#include <stdio.h>

int main()
{
    int Year;

    printf("Enter a Year: ");
    scanf("%d", &Year);

    if (Year % 2 == 0)
    {
        printf("It's a leap year!");
    }
    else
    {
        printf("It's not a leap year!");
    }
    return 0;
}