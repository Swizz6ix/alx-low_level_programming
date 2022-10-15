#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the alphabets
 *
 * Return: it returns zero when it is successful
 *
 */


int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
