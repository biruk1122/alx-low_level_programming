#include "main.h"
/**
 * _strpbrk - Entry point of the func
 * @s: input Value 
 * @accept: inputValue 
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
