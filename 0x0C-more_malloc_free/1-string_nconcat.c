#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, leyla1 = 0, leyla2 = 0;

	while (s1 && s1[leyla1])
		leyla1++;
	while (s2 && s2[leyla2])
		leyla2++;

	if (n < leyla2)
		s = malloc(sizeof(char) * (leyla1 + n + 1));
	else
		s = malloc(sizeof(char) * (leyla1 + leyla2 + 1));

	if (!s)
		return (NULL);

	while (a < leyla1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < leyla2 && a < (leyla1 + n))
		s[a++] = s2[b++];

	while (n >= leyla2 && a < (leyla1 + leyla2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
