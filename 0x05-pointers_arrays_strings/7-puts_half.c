#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half as tring followed by anew line
 * @str: input string
 * Return: print
 */
void puts_half(char *str)
{
	int length = strlen(str);

	int start_index = (length + 1) / 2;

	printf("%s\n", str + start_index);
}
