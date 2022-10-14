#include <stdio.h>


/**
 * main- prints the various sizes
 *
 * Return: zero if successfull
 *
 */

int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longsize = sizeof(long int);
	int longlongSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)\n" charSize);
	printf("Size of an int: %d byte(s)\n" intSize);
	printf("Size of a long int: %d byte(s)\n" longSise);
	printf("Size of a long long int: %d byte(s)\n" longlongsize);
	print("Size of a float: %d byte(s)\n" floatSize);
	return (0);
}
