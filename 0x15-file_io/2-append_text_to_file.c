#include "main.h"

/**
 * append_text_to_file - Appends the text file at the end of a texts file.
 * @filename: A pointer of the file to the name of the file text.
 * @text_content: The strings to be add to the end of the file text.
 *
 * Return: If the created function fails or the file name is NULL - -1.
 *         If the file name does not exist the user must be to  write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
