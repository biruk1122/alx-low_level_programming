#include "main.h"
/**
 * _strchr - The Entry Point of the Value 
 * @s: The input value 
 * @c: The input value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
