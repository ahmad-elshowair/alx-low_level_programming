#include "main.h"

/**
 * times_table - prints 9 times tables starting with 0.
 */
void times_table(void)
{
	for (int r = 0; r < 9; r++)
	{
		for (int c = 0; c < 9; c++)
		{
			_putchar((r * c) + '0');
			if (c < 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
