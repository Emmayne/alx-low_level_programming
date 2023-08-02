#include "lists.h"



/**
 * free_listint2 - frees attached list new line 1
 * @head: pointer to the listint_t list will be freed new line 2
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
