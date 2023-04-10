#include "main.h"

/**
 * read_textfile - Entry point
 * Description: Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 *		if the file can not be opened or read, return 0
 *		if filename is NULL return 0
 *		if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t to_read, to_write;
	char *buffer;  /* Buffer to store text */

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);

	/* open file to read and store and store fd */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocating malloc to buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read from file and stores number of bytes read */
	to_read = read(fd, buffer, letters);
	if (to_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write standard output and store the number of bytes written */
	to_write = write(STDOUT_FILENO, buffer, to_read);
	if (to_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (to_read);

}
