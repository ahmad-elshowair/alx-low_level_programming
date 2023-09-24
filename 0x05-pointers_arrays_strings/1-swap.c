#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first pointer
 * @b: the second pointer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a; /* save value in temporary variable*/
	*a = *b;
	*b = *a;
}
