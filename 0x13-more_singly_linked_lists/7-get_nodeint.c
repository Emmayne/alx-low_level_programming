#include "lists.h"

/**
 * get_nodeint_at_index - brings back certain index in attached list new line 1
 * @head: first node in the linked list new line 2
 * @index: index of the node brings back  new line 3
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *temp = head;

	while (temp && f < index)
	{
		temp = temp->next;
		f++;
	}

	return (temp ? temp : NULL);
}
