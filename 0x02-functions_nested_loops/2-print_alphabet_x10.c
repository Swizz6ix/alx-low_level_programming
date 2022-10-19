#include "main.h"

/**
 * print_alphabet- prints the alphabet from a to z
 *
 * print_alphabet_x10- prints the alphabets 10 times
 *
 *
 * Return: 0 always
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

/**
 * print_alphabet_x10- prints the alphabets 10 times
 *
 */


void print_alphabet_x10(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		print_alphabet();
	}

}

