#include "main.h"

/**
 * create_file - Creates file NL1
 * @filename: pointor to the name of the file to be create NL2
 * @text_content: pointor to a string to write to file NL3
 *
 * Return: If the func. doesnt work - -1 NL4
 *         Other - 1 NL5
 */
int create_file(const char *filename, char *text_content)
{
	int fp, wp, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wp = write(fp, text_content, lent);

	if (fp == -1 || wp == -1)
		return (-1);

	close(fp);

	return (1);
}
