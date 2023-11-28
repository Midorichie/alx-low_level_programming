#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: The file name
 * @text_content: The content written in the file
 * Return: 1 for success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_f;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(file_f, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(file_f);

	return (1);
}
