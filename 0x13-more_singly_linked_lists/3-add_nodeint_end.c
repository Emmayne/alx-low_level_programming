#include "lists.h"


/**
 * add_nodeint_end - adds node at the base of a attached list new line 1
 * @head: pointer to the initial element in the list new line 2
 * @n: data to insert in the fresh element new line 3
 *
 * Return: pointer to the new node, or NULL if it fails new line 4
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
