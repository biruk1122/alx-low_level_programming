#include "main.h"
/**
 * _puts_recursion - The Function like puts();
 * @s: The input Value
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
