#include <stdio.h>

char pattern(int n);

int main ()
{
    int num;

    printf("Enter Number of lines: ");
    scanf("%d", &num);

    printf("%c", pattern(num));

    return 0;
}

char pattern(int n)
{
    char hash = '#';

    for (int count = 0; count < n; count++) {
    hash += '#';
    printf("%c", hash);
    }
    return 0;
}