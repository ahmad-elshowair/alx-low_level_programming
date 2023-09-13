#include "main.h"

/**
 * print_alphabet_10 - prints all the alphabets in lowercase 10 times
 */
void print_alphabet_10(void)
{
	int i  = 0;
	char l = 'a';

	while (i < 10)
	{
		while(l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
