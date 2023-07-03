#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - The Entry point
 * @a: The input Value 
 * @size: The input Value
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum3, sum4, z;

	sum3 = 0;
	sum4 = 0;

	for (z = 0; z < size; z++)
	{
		sum3 = sum3 + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		sum4 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sum3, sum4);
}
