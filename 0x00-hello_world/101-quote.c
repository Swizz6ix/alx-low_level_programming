#include <stdio.h>


/**
 *
 * main- Print quote to standard error
 *
 * Return: returns zero if successful
 *
 */


int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);

	return(1);
}