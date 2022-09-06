#include <stdio.h>

int fibonnaci(int n);

int main()
{
    int num, c = 0, i;

    printf("Enter number of nth element: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d\n", fibonnaci(num));
        c++;
    }
    
    return 0;
}

int fibonnaci(int n)
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibonnaci(n - 1) + fibonnaci(n - 2));
    };
}