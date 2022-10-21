#include "main.h"

/**
 * _isdigit - prints the result
 *
 * @c: This is the character
 *
 * Return: returns zero on success
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
