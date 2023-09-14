#include "main.h"

/**
 * times_table - prints 9 times tables starting with 0.
 */
void times_table(void)
{
	int r, c, d;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			d = r * c;
			if (c == 0)
			{
				_putchar(d + '0');
			}

			if (d < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}

			else if (d >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
