#include "main.h"

/**
 * print_alphabet- prints the alphabets in lower cases
 *
 * Return: returns zero if it is successful
 *
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
