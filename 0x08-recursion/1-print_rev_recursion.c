#include "main.h"
/**
 * _print_rev_recursion - To Prints a string in a reverse Recursion.
 * @s: The the Value of a String to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
