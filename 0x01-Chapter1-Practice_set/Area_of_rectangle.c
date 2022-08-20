#include <stdio.h>

int main()
{
	int length, breadth;
	float Area;

	printf("Enter the length and breadth:\n");
	printf("Length: ");
	scanf("%d\n",  &length);
	printf("Breadth: ");
	scanf("%d", &breadth);

	Area = length * breadth;
	printf("\n%.2fm^2", Area);

	return 0;
}
