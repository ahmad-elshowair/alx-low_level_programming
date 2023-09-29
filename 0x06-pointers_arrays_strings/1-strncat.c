#include "main.h"
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: is the character that concat to it.
 * @src: is the character that concat from.
 * @n: is the number of bytes.
 * Return: return the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src));
}
