#include "main.h"
#include <stdio.h>

/**
 * main - check the isupper function
 * Return: 0
 */
int main(void)
{
	char c; 

	c = 'e';
	printf("%c %d\n", c, _isupper(c));
	c = 'E';
	printf("%c %d\n", c, _isupper(c));
	return (0);
}
