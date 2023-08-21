#include "main.h"

/**
 * swap_int - swap the value to two integers
 * @a: input
 * @b: input
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
