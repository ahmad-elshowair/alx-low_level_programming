#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: it is an argument of char
 */
void puts2(char *str)
{
	int i;
	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
