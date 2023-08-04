#include "main.h"
#include <unistd.h>


/**
 * _putchar - pen the char c to stdout L1
 * @c: The char to reveal L2
 *
 * Return: On victory 1. L3
 * On error, -1 is return, and errno set appropriately.L4
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
