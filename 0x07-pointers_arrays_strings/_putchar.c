#include "main.h"
#include <unistd.h>
/**
 * _putchar - To Write the character c to the stdout
 * @c: Print The character to print the OutPut
 *
 * Return: On the success 1.
 * On error, The vale of -1 is returned, and An errno is set to the appropriate Value.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
