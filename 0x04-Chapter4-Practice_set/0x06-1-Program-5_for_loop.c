#include <stdio.h>

int main()
{
    int Sum = 0;

    for (int i = 1; i <= 10; ++i)
    {
        Sum += i;
    }
    printf("Sum: %d", Sum);
    return 0;
}