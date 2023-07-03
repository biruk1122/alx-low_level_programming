#include "main.h"
/**
 *_memcpy - The function that copies memory data to the area
 *@dest: The Memory Location where it is stored
 *@src: The Memory Location where it is copied
 *@n: The Number of bytes
 *
 *Return: The Copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
