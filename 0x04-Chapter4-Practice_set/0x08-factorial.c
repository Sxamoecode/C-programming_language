#include <stdio.h>

int main()
{
    int num, result, count;

    //num = 7;
    printf("Enter a number: ");
    scanf("%d", &num);

    //Assign 1 to result and multiply through by i
    result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    printf("Factorial: %d", result);

    return 0;
}