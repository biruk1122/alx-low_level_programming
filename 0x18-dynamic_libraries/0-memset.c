#include "main.h"
/**
 * _memset -To fill a block element of memory with a specific value of the elments
 * @s: The Starting address of the memory to must be filled
 * @b: the desired value of the elment
 * @n: The number of bytes to be changed without any 
 *
 * Return: Return the Changed array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
