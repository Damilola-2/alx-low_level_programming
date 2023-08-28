#include "main.h"
#include <stddef.h>

/**
 * _memset - function that fills memory with constant byte
 * @s: input value
 * @b: input value
 * @n: input value
 * Return: string or 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (s == NULL || n == 0)
	{
		return (s);
	}

	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
