#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * read_textfile - This function reads a text-file and prints
 * it to the POSIX standard output
 * @filename: Name of the file to be read
 * @letters: number of letters to be read
 * Return: Number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_f;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_f = open(filename, O_RDONLY);
	if (file_f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_f);
		return (0);
	}
	lenr = read(file_f, buffer, letters);
	close(file_f);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
