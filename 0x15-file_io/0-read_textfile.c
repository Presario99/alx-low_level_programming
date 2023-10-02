#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fildes;
	ssize_t rd;
	ssize_t wr;

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	rd = read(fildes, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fildes);

	return (wr);
}
