#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the numbers
 *
 * Return: returns zero if it is successful
 *
 */

int main(void)
{
	int num;
	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
