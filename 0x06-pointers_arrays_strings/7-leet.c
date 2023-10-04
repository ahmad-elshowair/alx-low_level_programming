#include "main.h"

/**
 * *leet - a function that encodes a string to 1337
 *
 * @c: a pointer to a string
 *
 * Return: the encoded string
 */
char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = 4 +'0';
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			c[i] = 3 + '0';
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = 0 + '0';
		}
		else if (c[i] == 't' || c[i] == 'T')
                {
			c[i] = 7 + '0';
                }
		else if (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = 1 + '0';
		}
	}
	return (c);
}
