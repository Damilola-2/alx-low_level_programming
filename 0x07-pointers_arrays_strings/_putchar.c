#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c  to stdout
 * @c: the character to print
 * Return: on success 1
 * on errorr -1 is returned and error is completely appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
