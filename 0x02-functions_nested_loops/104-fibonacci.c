#include"main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2, c;
	int count = 2; /* count of generated fibonacci numbers*/

	printf("%d, %d", a, b);

	while (count < 98)
	{
		c = a + b;
		printf(", ");
		printf("%d", c);

		a = b;
		b = c;

		count++;
	}
	printf("\n");
	return (0);
}
