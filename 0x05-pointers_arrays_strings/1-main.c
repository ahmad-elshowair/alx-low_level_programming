#include <stdio.h>
#include "main.h"

/**
 * main - a function that calls and execute swap_int function
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 98;
	b = 42;
	printf("a=%d, d=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, d=%d\n", a, b);
	return (0);
}
