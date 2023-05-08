#include "main.h"

/**
 * _strlen - finds the length of a string
 * author: NerFLee
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t a;

	for (a = 0; str[a]; a++)
		;
	return (a);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int b;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	b = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (b == -1)
		return (-1);
	if (text_content != NULL)
		len = write(b, text_content, _strlen(text_content));
	close(b);
	if (len == -1)
		return (-1);
	return (1);
}
