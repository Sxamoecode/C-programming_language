#include <stdio.h>

int average(int num1, int num2, int num3);

int main()
{
    int n1, n2, n3;

    printf("Enter 3 numbers\n");

    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    printf("Enter number 3: ");
    scanf("%d", &n3);

    average(n1, n2, n3);
    printf("Average: %d", average(n1, n2, n3));
    
    return 0;
}

int average(int num1, int num2, int num3)
{
    int Average;

    Average = (num1 + num2 + num3)/3;
    return Average;
}