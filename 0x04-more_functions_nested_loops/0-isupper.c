#include "main.h"

/**
 * _isupper - prints the output
 *
 * @c: is the character
 *
 * Return: 1 on success and also zero
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
