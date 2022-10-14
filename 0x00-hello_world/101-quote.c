#include <unistd.h>
#include <stdlib.h>


/**
 * main- Prints the quote
 *
 * Return: returns zero if successful
 *
 */


int main(void
		)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
