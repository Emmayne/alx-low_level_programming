#include "main.h"

/**
 * get_bit - return value of a bit at index in a deci. numb.
 * @n: numb to search
 * @index: index of the bit is recorded
 *
 * Return: value of the bit is known
 */


int get_bit(unsigned long int n, unsigned int index)
{
	int bit_;

	if (index > 63)
		return (-1);

	bit_ = (n >> index) & 1;

	return (bit_);
}
