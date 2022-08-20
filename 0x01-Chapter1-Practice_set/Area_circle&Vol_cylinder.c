//V= pir2h, a= pir2
#include <stdio.h>
#define PI 3.14
int main()
{
	int r, h;
	float C,V;
	char a;

	printf("Enter: A- Area of circle/V- Volume of a cylinder: ");
	a = getchar();
	if (a == 'A') {
		printf("Input the radius here: ");
		scanf("%d", &r);
		C = PI * r * r;
		printf("\nArea of Circle = %.2fm^2\n", C);
	}
	else if (a == 'V') {
		printf("Input the radius: ");
		scanf("%d", &r);
		printf("Input the height: ");
		scanf("%d", &h);
		V = PI * r * r * h;
		printf("\nArea of Circle = %.2fm^3\n", V);
	}
	else {
		printf("Please input valid values\n");
    }
	return 0;
}
