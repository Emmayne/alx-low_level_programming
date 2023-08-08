#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read txt file print STDOUT NL1
 * @filename: txt file being read NL2
 * @letters: num. of letters to be read NL3
 * Return: w- actual num. of bytes read and printed NL4
 *        0 when func. fails or filename is NULL NL5
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t f;
	ssize_t wd;
	ssize_t td;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	td = read(f, bu, letters);
	wd = write(STDOUT_FILENO, bu, td);

	free(bu);
	close(f);
	return (wd);
}
