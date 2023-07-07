#include "main.h"
/**
 *_memcpy - A Function that copies memory area of the Func
 *@dest: Memory where is stored the data
 *@src: Memory where is copied the data
 *@n: Number of bytes
 *
 *Return: Copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
