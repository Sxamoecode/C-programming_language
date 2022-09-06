#include <stdio.h>

float Attraction(float m);
#define g 9.8

int main()
{
    float m;

    printf("Enter body of mass, m: ");
    scanf("%f", &m);

    printf("%.2fN", Attraction(m));

    return 0;
}
//F = mg
float Attraction(float m)
{
    float F;

    F = m*g;
    return F;
}