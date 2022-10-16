#include <stdio.h>


/**
 * main- prints the numbers
 *
 * Return: returns zero if it is successful
 *
 */

int main(void)
{
	int firstDigit;
	int secondDigit;


	for (firstDigit = '0'; firstDigit <= 99; firstDigit++)
	{
		for (secondDigit = '0'; secondDigit <= 99; secondDigit++)
		{
			if (firstDigit < secondDigit)
			{
				putchar((firstDigit / 10) + '0');
				putchar((firstDigit % 10) + '0');
				putchar(' ');
				putchar((secondDigit / 10) + '0');
				putchar((secondDigit % 10) + '0');

				if (firstDigit != 98 || secondDigit != 99)
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
