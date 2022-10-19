#include "main.h"

/**
 * main- prints the alphabets
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
