// S.I = PRT/100
#include <stdio.h>

#define Interest (((P)*(R)*(T)) / (100))

int main()
{
	float P, R, T;

	printf("Input the Principal: ");
	scanf("%f", &P);
	printf("Input Rate: ");
	scanf("%f", &R);
	printf("Input Time: ");
	scanf("%f", &T);
	printf("Interest = %.2f", Interest);

	return 0;
}
