#include "main.h"
#include <string.h>

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: a pointer of the destination
 * @src: a pointer of the source string
 * Return: a char
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
