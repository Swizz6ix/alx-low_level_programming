#include <stdio.h>
#include "main.h"

/**
 * main- prints the alphabets
 *
 * Return: returns zero if it is successful
 *
 * 
 */

 
 int main (void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		print_alphabet(i);
	}
	print_alpahbet('\n');

	return (0);

}
