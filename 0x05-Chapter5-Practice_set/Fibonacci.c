#include <stdio.h>

int fibonnaci(int n);

int main()
{
    int num, c = 0, i;

    printf("Enter number of nth term: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", fibonnaci(c));
        c++;
    }
    
    return 0;
}
//0 1 1 2 3 5 8 13 21 34 55 89
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