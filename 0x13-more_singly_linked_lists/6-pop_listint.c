#include "lists.h"



/**
 * pop_listint - remove head node of a attached list new line 1
 * @head: director to the intial element in the attached list new line 2
 *
 * Return: the data into the elements that was removed new line 3
 * or 0 if the list is null new line 4
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new;

	if (!head || !*head)
		return (0);

	new = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (new);
}

