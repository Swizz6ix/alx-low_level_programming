#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * Return: returns zero on success
 *
 * @a: first value
 *
 * @b: second value
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
