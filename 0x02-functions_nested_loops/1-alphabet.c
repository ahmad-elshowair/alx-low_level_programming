#include "main.h"

/**
 * main print all alphabet with a function
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{

	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (leter < 'z')
	{
		_putchar(letter);
	}
	_putchar('\n');
}
