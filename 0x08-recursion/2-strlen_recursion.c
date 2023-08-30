#include "main.h"
/**
 * _strlen_recursion - Return the length of string
 * @s: string
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
