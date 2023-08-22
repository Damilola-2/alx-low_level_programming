#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string, in reverse, followed by anew line
 * @s: string input
 * Return: print
 */
void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
