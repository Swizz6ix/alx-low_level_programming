#include <stdio.h>

/**
 * main - prints the sum of the multiples of 3 and 5
 *
 * Return: returns zero on success
 *
 */

int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
