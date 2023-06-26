#include "main.h"
/**
 *_ Puts - The prints of a string, followed by the new line, to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
