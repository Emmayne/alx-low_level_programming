#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocate 1024 bytes for a buff NL1
 * @file: The name of the file buffer is storing char NL2
 *
 * Return: A pointer to the newly-allocated buff NL3
 */
char *create_buffer(char *file)
{
	char *bufferp;

	bufferp = malloc(sizeof(char) * 1024);

	if (bufferp == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufferp);
}

/**
 * close_file - Closes file descript NL4
 * @fd: The file descriptor to be the end NL5
 */
void close_file(int fd)
{
	int cp;

	cp = close(fd);

	if (cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file NL4
 * @argc: The number of arguments supplied to the program NL5
 * @argv: An array of pointor to the argument NL6
 *
 * Return: 0 on success NL7
 *
 * Description: If the argument count is  - exit code 97 NL8
 * If file_from does not exist or cannot- exit code 98 NL9
 * If file_to cannot be created or  - exit code 99 NL10
 * If file_to or file_from cannot  - exit code 100 NL11
 */
int main(int argc, char *argv[])
{
	int fromp, top, rp, wp;
	char *bufferp;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufferp = create_buffer(argv[2]);
	fromp = open(argv[1], O_RDONLY);
	rp = read(fromp, bufferp, 1024);
	top = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromp == -1 || rp == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufferp);
			exit(98);
		}

		wp = write(top, bufferp, rp);
		if (top == -1 || wp == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufferp);
			exit(99);
		}

		rp = read(fromp, bufferp, 1024);
		top = open(argv[2], O_WRONLY | O_APPEND);

	} while (rp > 0);

	free(bufferp);
	close_file(fromp);
	close_file(top);

	return (0);
}
