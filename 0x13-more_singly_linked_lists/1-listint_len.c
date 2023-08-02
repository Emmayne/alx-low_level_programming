#include "lists.h"


/**
 * listint_len - returns the number of elements in a attached lists new line 1
 * @h: attached list of type listint_t for mov new line 2e
 *
 * Return: number of the different nodes new line 3
 */


size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
