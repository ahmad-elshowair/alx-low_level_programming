#include "main.h"
#include <ctype.h>

/**
 * _isdigit - chechk for a  digit (0 through 9).
 * @c: checked character.
 * Return: 1 if it is digit otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		if (isdigit(c))
			return (1);
		else
			return (0);
	}
}
