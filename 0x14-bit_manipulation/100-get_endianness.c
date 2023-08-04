#include "main.h"

/**
 * get_endianness - checks if machine is small or large endian
 * Return: 0 for large, 1 for small
 */


int get_endianness(void)
{
	unsigned int r = 1;
	char *c = (char *) &r;

	return (*c);
}
