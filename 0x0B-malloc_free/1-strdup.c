#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - To duplicate to the new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int k, j = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	aaa = malloc(sizeof(char) * (k + 1));

	if (aaa == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		aaa[j] = str[j];

	return (aaa);
}
