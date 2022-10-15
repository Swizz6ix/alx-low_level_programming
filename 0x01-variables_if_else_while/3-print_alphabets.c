#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char upperCase = 'A';
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');

	return (0);
}
