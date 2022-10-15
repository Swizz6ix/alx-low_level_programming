#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the alphabets in lower case
 *
 * Return: returns zero if successful
 *
 */


int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
