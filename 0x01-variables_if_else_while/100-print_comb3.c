#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int num_1, num_2;

	while (num_1 <= '9')
	{
		num_2 = 0;
		while (num_2 <= 9)
		{
			if (num_1 != num_2 && num_1 < num_2)
			{
				putchar(num_1 + 48);
				putchar(num_2 + 48);

				if (num_1 + num_2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num_2++;
		}
		num_1++;
	}
	putchar('\n');
	return (0);
}
