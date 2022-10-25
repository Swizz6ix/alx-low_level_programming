#include "main.h"

/**
 * _puts - prints string
 *
 * Return: returns zero on success
 *
 * Description: prints string to stdout
 *
 * @str: input string to print
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
