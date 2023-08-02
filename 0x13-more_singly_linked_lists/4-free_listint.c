#include "lists.h"

/**
 * free_listint - frees attaced list new line 1
 * @head: listint_t list will be freed new line 2
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
