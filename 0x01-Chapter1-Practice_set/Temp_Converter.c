// F = 9C/5 + 32 = 1.8C + 32
#include <stdio.h>

int main()
{
	int C;
	float F;

	printf("Input Centigrate: ");
	scanf("%d", &C);
	F = 1.8 * C + 32;
	printf("Fahrenheit = %.2fF", F);

	return 0;
}
