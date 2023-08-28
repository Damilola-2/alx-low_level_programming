#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 success
 */
void print_chessboard(char (*a)[8])
{
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
		{
			printf("%c ", a[row][col]);
		}
		printf("\n");
	}
}
