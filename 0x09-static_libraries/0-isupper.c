#include "main.h"

/**
 * _isupper - Uppercase Letters of the Alphapbet
 * @c: char to check the Letter 
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
