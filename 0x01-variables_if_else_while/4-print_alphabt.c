#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the alphabets letter
 *
 * Return: returns zero if it is successful
 *
 */


int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
		{
			letter++;
		}

		else if (letter == 'e')
		{
			letter++;
		}

		else
		{
			putchar(letter);
			letter++;
		}
	}

	putchar('\n');
	return (0);
}
