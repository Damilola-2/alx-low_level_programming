#include "main.h"

/**
 * print_rev - print the string, reverse, followed by anew line
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s[i])
		i++;

	while (i--)
	{
		putchar(*s[i]);
	}
	putchar('\n');
}
