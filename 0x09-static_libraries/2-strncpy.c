#include "main.h"
/**
 * _strncpy - Copy a string Function 
 * @dest: input value of dest
 * @src: input value of src
 * @n: input value of n
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
