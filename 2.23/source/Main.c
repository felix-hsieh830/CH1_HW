#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter three integers:\n");
	int num1, num2, num3;
	scanf_s("%d%d%d", &num1, &num2, &num3);

	int max = num1;
	int min = num1;

	if (num2 > max)
	{
		max = num2;
	}
	if (num2 < min)
	{
		min = num2;
	}

	if (num3 > max)
	{
		max = num3;
	}
	if (num3 < min)
	{
		min = num3;
	}
	printf("max is %d\n", max);
	printf("min is %d\n", min);

	return 0;
}