#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the letter
 *
 * Retrun: returns zero if successful
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
