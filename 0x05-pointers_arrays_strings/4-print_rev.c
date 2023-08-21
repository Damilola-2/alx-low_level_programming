#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string, in reverse, followed by anew line
 * @s: input
 * Return: 0
 */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		putchar(*s);
	}
	else
	{
		putchar('\n');
	}
}
