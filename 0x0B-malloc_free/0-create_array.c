#include "main.h"
#include <stdlib.h>
/**
 * create_array - To Create array of size the size and assign the Char c
 * @size: The Size of the array
 * @c: char to the char assign
 * Description: To Create array of the Size and assign char c
 * Return: The Pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
