#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half of a string followed by anew line
 * @str: input string
 * Return: print
 */
void puts_half(char *str)
{
	int length = strlen(str);

	if (length % 2 == 0)
	{
		for (int i = length / 2; i < length; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
