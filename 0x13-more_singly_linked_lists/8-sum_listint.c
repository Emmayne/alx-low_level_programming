#include "lists.h"

/**
 * sum_listint - computes the additive data in a listint_t list new line 1
 * @head: initial node into linked list new line 2
 *
 * Return: answer new line 3
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
