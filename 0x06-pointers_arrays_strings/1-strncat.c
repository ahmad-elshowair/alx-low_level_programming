#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: is the character that concat to it.
 * @src: is the character that concat from.
 * @n: is the number of bytes.
 * Return: return the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p_d = dest;
	char *p_s = src;

	while (*p_d != '\0')
		p_d++;

	while (*p_s != '\0' && n > 0)
	{
		*p_d = *p_s;
		P_d++;
		p_s++;
		n--;
	}
	*p_d = '\0';
	return (dest);
}
