#include "lists.h"



/**
 * print_listint - displays every element of a attached list new line 1
 * @h: attached list of type listint_t to print out new in project new line 2
 *
 * Return: number of the different nodes new line 3
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
