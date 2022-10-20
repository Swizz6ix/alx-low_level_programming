#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints out all the natural numbers
 *
 * @n: starting from the number n to 98
 *
 * Return: returns zero (0) on success
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	else 
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
