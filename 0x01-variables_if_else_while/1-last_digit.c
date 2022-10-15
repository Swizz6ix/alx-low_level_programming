#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/**
 * main - prints the value of n
 *
 * Result: returns zero if it is successful
 *
 */



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, (n % 10));

	if((n % 10) > 5)

		printf("and is greater than 5\n");




	else if ((n % 10) < 5)

		printf("and is less than 6 and 0\n");


	else
		printf("and is 0\n");


	return (0);
}
