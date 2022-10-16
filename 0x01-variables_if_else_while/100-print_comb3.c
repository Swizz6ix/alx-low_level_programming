#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int firstDigit;
	int secondDigit;

	firstDigit = '0';
	secondDigit = '0';

	while ((firstDigit <= '9') & (secondDigit <= '9'))
	{
		if (firstDigit < secondDigit && secondDigit <= '9')
		{
			putchar(firstDigit);
			putchar(secondDigit);
		}


		firstDigit++;
		secondDigit++;

	putchar(',');
	putchar(' ');
	
	}
	return (0);
}
