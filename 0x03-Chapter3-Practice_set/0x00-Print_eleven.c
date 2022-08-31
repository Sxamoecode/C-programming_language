#include <stdio.h>

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 11)
    {
        printf("I'm Eleven!");
    }
    else
    {
        printf("I'm not Eleven!");
    }
    return 0;
}