#include "main.h"
/**
 * print_chessboard - The Entry point
 * @a: The array Value
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*c)[10])
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
			_putchar(c[a][b]);
		_putchar('\n');
	}
}
