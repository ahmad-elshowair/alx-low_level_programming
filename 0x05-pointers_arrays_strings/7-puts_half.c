#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: an argument of char type.
 */
void puts_half(char *str)
{
	int length, i, half_lenth;

	 length = strlen(str);
	 half_length = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);
	 for (i = half_length; i < length; i++)
	 {
		 _putchar(str[i];
	 }
	 _putchar('\n');


}
