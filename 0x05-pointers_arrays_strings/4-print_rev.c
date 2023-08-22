#include "main.h"

/**
 * print_rev - print a string, reverse, followed by anew line
 * @s: input
 *  
 * Return: 0
 */

void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)

	{
		printf("%c", s[i]);
	}
		printf("\n");
	}/* Description -  main entry*/
	int main(void)
	{
		char str[] = "Hello, World!";

		print_rev(str);

		return (0);
	}
