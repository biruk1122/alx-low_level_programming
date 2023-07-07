#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point the Func
 * @s: input Value
 * @c: input Value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
