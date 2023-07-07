#include "main.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout of the Function
 * @str: string to print the str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
