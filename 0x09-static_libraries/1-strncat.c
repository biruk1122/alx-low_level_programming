#include "main.h"
/**
 * _strncat - Concatenate the two strings Functions
 * using at most n bytes from src of the Func
 * @dest: input value of the Func
 * @src: input value of the Func
 * @n: input value ot the n Func
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
