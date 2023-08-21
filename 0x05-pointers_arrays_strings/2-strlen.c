#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: input
 * Return: length or 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
