#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string input
 * return: string or 0
 */
void rev_string(char *s)
{
	int length = strlen(s);
	char temp;

	for (int i = 0; j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
