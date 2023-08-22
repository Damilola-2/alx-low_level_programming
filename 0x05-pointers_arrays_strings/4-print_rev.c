#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print a string, in reverse, followed by anew line
 * @s: string input
 * Return: print
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		print_rev(s + 1);
		printf("%c", *s);
	}
}
