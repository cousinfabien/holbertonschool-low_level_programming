#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * close_fd - closes a file descriptor and handles errors
 * @fd: file descriptor to close
 *
 * If the file descriptor cannot be closed, prints an error message
 * and exits with status code 100.
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copies data from one file descriptor to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: name of the source file (for error messages)
 * @file_to: name of the destination file (for error messages)
 *
 * Reads in chunks of 1024 bytes and writes the data to the destination.
 * Handles read/write errors and exits with codes 98 or 99 accordingly.
 */

void copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buffer[1024];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close_fd(fd_from);
		close_fd(fd_to);
		exit(98);
	}
}

/**
 * main - entry point for the file copy program
 * @argc: argument count
 * @argv: argument vector
 *
 * Copies the content of one file into another.
 * Return: 0 on success.
 * Exits with:
 * 97 if the arguments are invalid,
 * 98 if the source file cannot be read,
 * 99 if the destination file cannot be written,
 * 100 if a file descriptor cannot be closed.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}

	fchmod(fd_to, 0664);
	copy_file(fd_from, fd_to, argv[1], argv[2]);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
