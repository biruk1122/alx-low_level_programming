#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes to the character of the element c to the stdout
 * @c: The character to print the output
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno of the element is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
