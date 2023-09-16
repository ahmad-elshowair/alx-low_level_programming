#include "main.h"
#include <stdio.h>

/**
 * main - call in the _isdigit function
 * Return: 0
 */
int main (void)
{
	char c;

	c = '2';
	printf("%c: %d\n", c, _isdigit(c));
	c = 's';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
