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
			_putchar(d + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
