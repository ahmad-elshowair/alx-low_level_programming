#include "main.h"

/**
 * print_sign - print 1 or 0 or -1
 * @n: is the checked inputs
 * Return: 1 if the inout is more than 1,
 * else 0 if it is zero, else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
                _putchar(',');
                _putchar(' ');
                _putchar(n);
                return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
                _putchar(',');
                _putchar(' ');
                _putchar(n);
                return (-1);
	}
}
