#include <stdio.h>

float Converter(float C);

int main()
{
    float C;

    printf("Enter your temperature in Celsius: ");
    scanf("%f", &C);

    printf("Fahrenheit: %.2fF", Converter(C));

}

float Converter(float C)
{
    float Fahrenheit;

    Fahrenheit = (1.8*C) + 32;
    return Fahrenheit;
}