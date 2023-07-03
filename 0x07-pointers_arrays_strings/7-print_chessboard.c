#include "main.h"
/**
 * print_chessboard - The Entry point
 * @a: The array Value
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*c)[8])
{
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(c[a][b]);
		_putchar('\n');
	}
}
