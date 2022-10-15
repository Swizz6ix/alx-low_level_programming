#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the lower and upper case alphabets
 *
 * Return: returns zero if it is successful
 *
 */

int main(void)
{
	char upperCase = 'A';
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');

	return (0);
}
