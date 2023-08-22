#include "main.h"

/**
 * puts_half - print half of string followed by a new line
 * @str: imput string
 * Return: print
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}