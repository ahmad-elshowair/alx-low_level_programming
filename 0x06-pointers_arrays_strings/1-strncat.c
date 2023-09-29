#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p_d = dest;
	char *p_s = src;

	while (*p_d != '\0')
		p_d++;

	while (*p_s != '\0' && n > 0)
	{
		*p_d = *p_d;
		P_d++;
		P-s++;
		n--;
	}
	*p_d = '\0';

	return (dest);
}
