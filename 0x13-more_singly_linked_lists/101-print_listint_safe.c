
#include "lists.h"

/**
 * looped_listint_len - Counts the number
 * in a looped listint_t linked list new line 1.
 * @head: A director to the head of the listint_t to check.
 *
 * Return: the list isn't looped - 0. new line 2
 * Otherwise - the number of unique nod inside list. new line 3
 */


size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lion, *gun;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lion = head->next;
	gun = (head->next)->next;

	while (gun)
	{
		if (lion == gun)
		{
			lion = head;
			while (lion != gun)
			{
				nod++;
				lion = lion->next;
				gun  = gun ->next;
			}

			lion = lion->next;
			while (lion != gun)
			{
				nod++;
				lion = lion->next;
			}

			return (nod);
		}

		lion = lion->next;
		gun = (gun->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list new line 4
 * @head:  the listint_t list new line 5
 *
 * Return: number of nodes in the sheet. new line 6
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nod, index = 0;

	nod = looped_listint_len(head);

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nod; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);
}
