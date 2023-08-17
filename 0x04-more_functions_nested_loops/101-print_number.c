#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
