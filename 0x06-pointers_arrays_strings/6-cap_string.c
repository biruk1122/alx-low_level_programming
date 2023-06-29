#include "main.h"

/**
 * cap_string - The Capitalizes all the words of a string.
 * @str: The string to be the capitalized Word.
 *
 * Return: The Pointer to the changed to the string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}
