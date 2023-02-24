#include "main.h"

/**
 * _strlen - finds the length of a string
 *
 * @str: the string
 *
 * Return: the length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - creates a file with 'rw' permissions,
 * then writes the content in a file that already exists,
 * doesn't change its permissions and just truncates it
 *
 * @filename: the name given to thr new file
 * @text_content: parameter
 *
 * Return: 1 on success, -1 0n error
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);


	if (!text_content)
	{
		close(fd);
		return (1);
	}

	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
