#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: it is an argument of char
 */
void puts2(char *str)
{
	char *p = str;
	while (*p != '\0')
	{
		_putchar(*p);
		p += 2;
	}
	_putchar('\n');
}
