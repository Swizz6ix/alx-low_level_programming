#include "main.h"

/**
 * print_numbers - print out the numbers
 *
 * Return: returns zero on success
 *
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
