#include <stdio.h>

int main()
{
    int Income, Tax;
    char Level;

    printf("Income Calculator\n");
    printf("Enter your current level\n");
    printf("'A' - 2.5-5L\n'B' - 5-10L\n'C' -Above 10L\n'q' - Below 2.5\n Level: ");

    //Enter a character to indicate levels of employee
    switch (getchar())
    {
        case 'q': {
            printf("Level below 2.5L! No tax!!!");
            break;
        }
        case 'A': {
            printf("Input your Income: ");
            scanf("%d", &Income);
            Tax = Income * 5/100;
            printf("Tax = %d", Tax);
            break;
        }
        case 'B': {
            printf("Input your Income: ");
            scanf("%d", &Income);
            Tax = Income * 20/100;
            printf("Tax = %d", Tax);
            break;
        }
        case 'C': {
            printf("Input your Income: ");
            scanf("%d", &Income);
            Tax = Income * 30/100;
            printf("Tax = %d", Tax);
            break;
        }
     
        default: {
            break;
        }
    }

    return 0;
}