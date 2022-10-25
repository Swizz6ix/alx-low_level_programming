#include "main.h"

/**
 * _strlen - prints the length of the string
 *
 * @s: input string to count
 *
 * Return: returns zero on success
 *
 * Description: returns the length of a given string
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
