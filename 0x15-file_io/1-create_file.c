#include "main.h"

/**
 * create_file - Entry point
 * Description: Create a file.
 * @filename: Name of the file to be read
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, to_write, s = 0;

	/* Check if filename is NULL and return -1 */
	if (!filename)
		return (-1);

	/*
	 * Open file for write only, create it if it doesn't exist
	 * Truncate to zero length if it exists
	 * 0600, Sets file permissions to rw- --- ---, read & write for owner only
	 */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	/* If text_content is not empty, write it to file */
	if (text_content)
	{
		/* Counts number of characters in text_content */
		while (text_content[s])
			s++;
		/* Writes text_content to file */
		to_write = write(fd, text_content, s);
		if (to_write != s)
			return (-1);
	}

	close(fd);

	return (1);
}
