#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The charcter to print
 *
 *
 * Return: returns one if successful and -1 if it is not
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
