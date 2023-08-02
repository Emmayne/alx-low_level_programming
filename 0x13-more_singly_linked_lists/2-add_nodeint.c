#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a attached list new line 1
 * @head: pointer to initial node in the list new line 2
 * @n: data to add into that new node new line 3
 *
 * Return: pointer to new node, and or NULL if it doesnt run new line 4
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
