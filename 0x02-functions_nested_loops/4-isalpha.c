#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 *
 * @c: character to be checked
 *
 * Return: 1 if letter, is uppercase
 *
 */

int _isalpha(int c)
{
	if ((c <= 90) && (c >= 65))
		return (1);
	else if ((c >= 97) && (c <= 122))
		return (1);

	else
		return (0);
}
