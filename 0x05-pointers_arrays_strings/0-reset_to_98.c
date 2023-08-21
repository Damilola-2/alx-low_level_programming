#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Takes a pointer to an int  as a parameter and
 *
 * update the value it point to 98
 * @n: num
 * Return: 0
 */

void reset_to_98(int *n)
{
	*n = 98;

	int n = 42;

	printf("Before reset: %d\n", n);

	reset_to_98(&n); /* pass a pointer to a num*/

	printf("After reset: %d\n", n);

	return (0);
}
