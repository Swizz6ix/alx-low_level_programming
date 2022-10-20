#include "main.h"

/**
 * print_times_table - prints out the times_table
 *
 * @n: starting from the number n
 *
 * Return: returns
 *
 */

void print_times_table(int n)
{
	int y, x, pduct;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				pduct = (y * x);
				if (x != 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (pduct < 10 && x != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((pduct % 10) + '0');
				}

				else if (pduct >= 10 && pduct < 100)
				{
					_putchar(' ');
					_putchar((pduct / 10) + '0');
					_putchar((pduct % 10) + '0');
				}

				else if (pduct >= 100 &&x != 0)
				{
					_putchar((pduct / 100) + '0');
					_putchar((pduct / 10) % 10 + '0');
					_putchar((pduct % 10) + '0');
				}

				else
					_putchar((pduct % 10) + '0');
			}
			_putchar('\n');
		}

	}

}
