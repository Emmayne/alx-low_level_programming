#include "lists.h"


/**
 * free_listint_safe - frees attached list new line 1
 * @h: director to first node in the attached list
 * new line 2
 * Return: number of materials in the freed list new line 3
 */


size_t free_listint_safe(listint_t **h)
{
	size_t lent = 0;
	int difft;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difft = *h - (*h)->next;
		if (difft > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lent++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lent++;
			break;
		}
	}

	*h = NULL;

	return (lent);
}
