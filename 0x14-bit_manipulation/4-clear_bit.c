#include "main.h"

/**
 * clear_bit - set value of a given bit into 0
 * @n: pointer to numb. into change
 * @index: index of bit into clear
 *
 * Return: 1 for the success, -1 for the failure
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
