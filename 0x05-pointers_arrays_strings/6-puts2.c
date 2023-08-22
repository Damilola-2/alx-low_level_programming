#include <stdio.h>

/**
 * puts2 - print character staring with first character
 * followed by a new line
 * @str: input string
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
