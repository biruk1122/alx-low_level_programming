#include "main.h"
/**
 * _strpbrk - EThe ntry point of teh input value 
 * @s: The input Value 
 * @accept: The input Value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
