#include <stdio.h>

int main()
{
	int num;

	printf("Enter any number: ");
	scanf("%d", &num);

	if (num % 97 == 0)
	{
		printf("%d", num);
	}
	else{
		printf("Not divisible by 97");
	}

	return 0;
}
