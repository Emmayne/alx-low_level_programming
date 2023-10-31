#include "main.h"

/**
 * create_file - Creates a file NL 1
 * @filename: A pointer to the name of the file NL 2
 * @text_content: A pointer to a string to write to the file. NL 3
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdq, wq, lenq = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenq = 0; text_content[lenq];)
			lenq++;
	}

	fdq = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wq = write(fdq, text_content, lenq);

	if (fdq == -1 || wq == -1)
		return (-1);

	close(fdq);

	return (1);
}
