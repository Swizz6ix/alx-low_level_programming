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
	int thirdDigit;

	for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)
	{
		for (secondDigit = '0'; secondDigit <= '9'; secondDigit++)
		{
			for (thirdDigit = '0'; thirdDigit <= '9'; thirdDigit++)
			{
				if ((firstDigit < secondDigit) & (secondDigit < thirdDigit) & (thirdDigit <= '9'))
				{
					putchar(firstDigit);
					putchar(secondDigit);
					putchar(thirdDigit);
					if ((firstDigit + secondDigit + thirdDigit) < 168)
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
