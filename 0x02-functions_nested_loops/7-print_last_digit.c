#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: it is the integer that is passed
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);

	return (last_digit);
}
