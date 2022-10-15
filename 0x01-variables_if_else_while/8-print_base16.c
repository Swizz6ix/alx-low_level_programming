#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints out base 16
 *
 * Return: returns zero when it is sucessfull
 *
 */

int main(void)
{
	int num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
