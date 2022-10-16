#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the numbers in ascending order
 *
 * Return: returns zero if it is successful
 *
 */


int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		num ++;
	putchar('\n');
	return (0);
}
