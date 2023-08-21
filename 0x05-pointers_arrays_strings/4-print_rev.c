#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string, in reverse, followed by anew line
 * @s: input
 * Return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	/*calculate string*/
	while (s[length] != '\0')
	{
		length++;
	}
	/* print string in reverse*/
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
