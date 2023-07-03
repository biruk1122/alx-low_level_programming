#include "main.h"
/**
 * _strspn - The Entry point of the Value
 * @s: input
 * @accept: The input Value 
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
