#include "main.h"

/**
 * _islower - print the lowercase alphabets
 *
 * Return: 1 if lower case, 0 if uppercase
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
