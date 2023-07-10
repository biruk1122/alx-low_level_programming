#include "main.h"
#include <unistd.h>
/**
 * _putchar - To Writes the character c to stdout output of the function
 * @c: The character to print the output
 *
 * Return: On success 1.
 * On error, -1 is Returned, and errno is set appropriately the Function.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
