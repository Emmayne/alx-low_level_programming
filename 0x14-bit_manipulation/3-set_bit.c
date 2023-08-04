#include "main.h"


/**
 * set_bit - set bit at given index into 1
 * @n: pointer to numb. into change
 * @index: index of bit to set into 1
 *
 * Return: 1 success', -1  failure's
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
