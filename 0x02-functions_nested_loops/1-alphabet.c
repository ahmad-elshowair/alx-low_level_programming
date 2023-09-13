#include "main.h"

/**
 * main print all alphabet with a function
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
	}
	_putchar('\n');
}
