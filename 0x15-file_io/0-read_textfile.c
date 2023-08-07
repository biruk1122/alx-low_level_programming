#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file the print function to the STDOUT.
 * @filename: text the file to be being reads the print func
 * @letters: number of the letters to be reads the print
 * Return: w- the actual number of the bytes to be read and printed
 *        0 when the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
