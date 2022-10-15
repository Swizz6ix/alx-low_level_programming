#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints the difit numbers
 * Return: returns zero if it is successful
 *
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
