#include "main.h"
#include <stddef.h>

/**
 * _memset - function that fills memory with constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n:number of bytes to be changed
 * Return: changed array with new value for n bytes
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
