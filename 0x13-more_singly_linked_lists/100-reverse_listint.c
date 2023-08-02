#include "lists.h"

/**
 * reverse_listint - changes attached list new line 1
 * @head: director to the initial node in the list new line 2
 *
 * Return: director to the initial node in the new list new line 3
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
