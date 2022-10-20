#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int y, x, pduct;

	pduct = 0;

	for (y =0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			pduct = y * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (pduct >= 10)
			{
				_putchar((pduct / 10) + '0');
				_putchar((pduct % 10) + '0');
			}

			else if ((pduct < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((pduct % 10) + '0');
			}
				else
					_putchar((pduct % 10) + '0');
		}
		_putchar('\n');
	}

}
