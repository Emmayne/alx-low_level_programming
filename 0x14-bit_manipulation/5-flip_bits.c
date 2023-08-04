#include "main.h"

/**
 * flip_bit - counts numb. of bits to change
 * to get from 1 numb. into another
 * @n: 1st num.
 * @m: 2nd num.
 *
 * Return: num. of bit to change
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		current = exclusive >> r;
		if (current & 1)
			count++;
	}

	return (count);
}
