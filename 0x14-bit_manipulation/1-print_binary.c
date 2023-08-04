#include "main.h"

/**
 * print_bin - print the bin equiv of a decimal num.
 * @n: numb to print in bin.
 */


void print_binary(unsigned long int n)
{
	int r, count = 0;
	unsigned long int curr;

	for (r = 63; r >= 0; r--)
	{
		curr = n >> r;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
