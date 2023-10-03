#include "main.h"

/**
 * *string_toupper - a function that changes all lower letters to upper
 *
 * @s: a pointer to the string
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		*s++;
	}
	return (s);
}
