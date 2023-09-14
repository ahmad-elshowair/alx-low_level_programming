#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all numbers to 98
 * @n: the started number
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else if (i == 98)
			{
				printf("%i\n", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				printf("%i, ", j);
			}
			else if (j == 98)
			{
				printf("%i\n", j);
			}
		}
	}
}
