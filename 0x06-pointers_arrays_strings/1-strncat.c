#include "main.h"
/**
 * _strncat - The Concatenate of the two Strings
 * using the Most n bytes from the src
 * @dest: The input value
 * @src: The input value
 * @n: The input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
