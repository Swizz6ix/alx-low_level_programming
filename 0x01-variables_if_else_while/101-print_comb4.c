#include <stdio.h>

/**
 * main- prints all three numbers
 *
 * Return: returns zero if it is successful
 *
 */

int main(void)
{
	int firstDigit;
	int secondDigit;
	int thirdD;

	for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)
	{
		for (secondDigit = '0'; secondDigit <= '9'; secondDigit++)
		{
			for (thirdD = '0'; thirdD <= '9'; thirdD++)
			{
				if ((firstDigit < secondDigit) & (secondDigit < thirdD) & (thirdD <= '9'))
				{
					putchar(firstDigit);
					putchar(secondDigit);
					putchar(thirdD);
					if ((firstDigit + secondDigit + thirdD) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
