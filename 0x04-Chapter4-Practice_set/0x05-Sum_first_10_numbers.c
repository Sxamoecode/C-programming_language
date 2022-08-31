#include <stdio.h>

int main()
{
    int Sum = 0, i = 1;

    while (i <= 10)
    {
        Sum += i;
        ++i;
    }
    printf("Sum: %d", Sum);
    return 0;
}