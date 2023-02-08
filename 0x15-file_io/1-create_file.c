#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created
 * file can not be written
 */
int create_file(const char *filename, char *text_content)
{
	int filen, i = 0, n_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	filen = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (filen == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	n_write = write(filen, text_content, i);
	if (n_write == -1)
		return (-1);
	return (1);
}
