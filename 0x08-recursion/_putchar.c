#include "main.h"
#include <unistd.h>
/**
 * _putchar - To Writes the character c to stdout of the Function
 * @c: The Character to print the Output
 *
 * Return: On success 1.
 * On error, The Number -1 is returned, and errno is set to the approximate Number.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
