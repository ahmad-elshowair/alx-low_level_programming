#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if the input is alaphabet
 * @c: it is the checked character
 * Return: 1 if c is a letter, or 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

}
