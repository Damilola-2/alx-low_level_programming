#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminated null byte,to the beffer pointed to dest
 * @dest: input
 * @src: input
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
