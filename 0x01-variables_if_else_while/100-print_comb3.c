#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints both the first and second digits
 *
 * Return: returns zero if it is successful
 *
 */


int main(void)
{
	int firstDigit;
	int secondDigit;


for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)

	{

for (secondDigit = '0'; secondDigit <= '9'; secondDigit++)
		{

			if ((firstDigit < secondDigit) & (secondDigit <= '9'))
			{
				putchar(firstDigit);
				putchar(secondDigit);
				
				if ((secondDigit < '9') | (firstDigit < '8'))
				
				{
					putchar(',');
					putchar(' ');
				}
			}

		}


	}
	putchar('\n');
	return (0);
}
