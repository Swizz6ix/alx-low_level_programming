#include "main.h"

/**
 * _isupper - prints the output
 *
 * @c: is the character
 *
 * Returns: 1 on success
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
