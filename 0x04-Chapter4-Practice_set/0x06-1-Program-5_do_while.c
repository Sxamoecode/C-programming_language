#include <stdio.h>

int main()
{
    int Sum = 0, i = 1;

    do {
        Sum += i;
        ++i;
    }
    while (i <= 10);
    
    printf("Sum: %d", Sum);
    return 0;
}