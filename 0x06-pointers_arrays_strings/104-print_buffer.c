#include "main.h"
#include <stdio.h>

/**
 * print_buffer - To Prints the buffer
 * @b: The buffer
 * @size: The size
 * Return: The void
 */

void print_buffer(char *b, int size)
{
	int a, b, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		b = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (c = 0; c < 10; c++)
		{
			if (c < b)
				printf("%02x", *(b + a + c));
			else
				printf("  ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < b; c++)
		{
			int c = *(b + a + c);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
