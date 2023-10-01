#include "main.h"
#include <string.h>

/**
 * *_strncpy - a function that copies a string
 * @dest: a pointer to the destenation string
 * @src: a pointer to the source string
 * @n: number of copied characters
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return strncpy(dest, src, n);
}
