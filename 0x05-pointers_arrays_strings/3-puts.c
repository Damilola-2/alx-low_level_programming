#include "main.h"
#include <stdio.h>

/**
 * _puts - Print a string followed by a new line
 * @str: input
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	_putchar('\n');
}
