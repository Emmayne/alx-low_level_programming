#include "lists.h"


/**
 * insert_nodeint_at_index -adds new node in attached list new line 1
 * at a given position new line 1
 * @head: director to the initial node in the list new line 2
 * @idx: index at the new node is included new line 3
 * @n: data to add in the new node new line 4
 *
 * Return: director to the new node, or NULL new line 5
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int v;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (v = 0; temp && v < idx; v++)
	{
		if (v == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}	

