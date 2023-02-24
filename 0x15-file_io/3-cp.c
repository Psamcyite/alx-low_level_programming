#include "main.h"

/**
 * __exit - prints an error message and exits with the value
 *
 * @error: num is either exit value or a file descriptor
 * @s: a name, either of the two filenames
 * @fd: file descriptor
 *
 * Return: 0 on success
 */

int __exit(int error, char *s, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copies one file to another
 *
 * @argc: should be 3
 * @argv: first is file to copy from (fd_1),
 * second is the file to copy to (fd_2)
 *
 * Return: 0 (success), 97-100 (exit values fir errors)
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, n_read, n_wrote;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);


	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd_2 == -1)
		__exit(99, argv[2], 0);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		__exit(98, argv[1], 0);

	while ((n_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);

		n_wrote = write(fd_2, buffer, n_read);
		if (n_wrote == -1)
			__exit(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
