#include "holberton.h"

/**
 * main -  copies the content of a file to another file.
 * @ac: argumet couter
 * @av: argument vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, read1, write1;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	read1 = read(fd1, buf, 1024);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (read1 == -1 || fd1 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		write1 = write(fd2, buf, read1);
		if (write1 == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		read1 = read(fd1, buf, 1024);
		fd2 = open(av[2], O_WRONLY | O_APPEND);
	} while (read1 > 0);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2),
			exit(100);
	return (0);
}
