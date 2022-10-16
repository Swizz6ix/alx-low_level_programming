#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int firstDigit;
	int secondDigit;

	firstDigit = '0';
	secondDigit = '0';

	while (firstDigit <= '9')

	{
		while (secondDigit <= '9')
		{

				
				if (firstDigit < secondDigit)
				{
					putchar(firstDigit);
					putchar(secondDigit);
					if ((secondDigit < '9') | (firstDigit < '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}

				secondDigit++;
				
		}

		firstDigit++;
	
	}
	return (0);
}
