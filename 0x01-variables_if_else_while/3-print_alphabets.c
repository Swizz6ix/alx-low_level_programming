#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char upperCase = 'A';
	char lowerCase = 'a';

	while (upperCase <= 'Z' && lowerCase <= 'z')
	{
		putchar(lowerCase);
		putchar(upperCase);
		lowerCase++;
		upperCase++;
	}

	putchar('\n');

	return (0);
}
