#include <stdio.h>

int Recursion(int n);

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum of the first %d number is = %d", n, Recursion(n));

    return 0;
}

int Recursion(int n)
{
    if (n == 0) {
        return 0;
    }
    return n + Recursion(n - 1);
}