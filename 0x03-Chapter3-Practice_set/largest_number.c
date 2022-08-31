#include <stdio.h>

int main()
{
    float num1, num2, num3, num4;

    printf("Enter 4 numbers\n");
    printf("Num 1: ");
    scanf("%f", &num1);
    printf("Num 2: ");
    scanf("%f", &num2);
    printf("Num 3: ");
    scanf("%f", &num3);
    printf("Num 4: ");
    scanf("%f", &num4);

    printf("max(%.1f, %.1f, %.1f, %.1f) = %.1f", num1, num2, num3, num4, num1);

    return 0;
}