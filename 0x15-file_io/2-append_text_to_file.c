#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, to_write, s = 0;

	/* Checks if filename is NULL  and return -1 */
	if (!filename)
		return (-1);

	/* Opens file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		/* Write text_content to file */
		while (text_content[s])
			s++;
		/* Checks if writing to the file failed */
		to_write = write(fd, text_content, s);
		if (to_write != s)
			return (-1);
	}

	close(fd);

	return (1);
}

