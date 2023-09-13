#include "main.h"
#include <ctype.h>

/**
 * _islower - check if the letter is lowercase
 * c - if it is lowercase return 1 otherwise return 0
 *
 */
int _islower(int c)
{
	int result = islower(c);

	if (result)
		return (1);
	else
		return (0);
}
