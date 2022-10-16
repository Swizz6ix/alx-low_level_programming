#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int firstDigit;
	int secondDigit;

	while ((firstDigit <= '9') & (secondDigit <= '9'))
	{
		putchar(firstDigit);
		putchar(secondDigit);
		firstDigit++;
		secondDigit++;
	}

	putchar(',');
	putchar(' ');
	return (0);
}
