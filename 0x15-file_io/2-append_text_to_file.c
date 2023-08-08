#include "main.h"

/**
 * append_text_to_file - Changes txt at the end of a file NL1
 * @filename: Pointor to the name of the file NL2
 * @text_content:string to add to the end of the file NL3
 *
 * Return: If the func. fails or filename is NULL - -1 NL4
 *         If the file does not exist the user write permissions - -1 NL4
 *         Otherwise - 1 NL5
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wp, lenp = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenp = 0; text_content[lenp];)
			lenp++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wp = write(op, text_content, lenp);

	if (op == -1 || wp == -1)
		return (-1);

	close(op);

	return (1);
}
