#include "lists.h"

/**
 * find_listint_loop - locates the loop in linked list new line 1
 * @head: attached list to search for new line 2
 *
 * Return: address where the loop begins, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowt = head;
	listint_t *fastw = head;

	if (!head)
		return (NULL);

	while (slowt && fastw && fastw->next)
	{
		fastw = fastw->next->next;
		slowt = slowt->next;
		if (fastw == slowt)
		{
			slowt = head;
			while (slowt != fastw)
			{
				slowt = slowt->next;
				fastw = fastw->next;
			}
			return (fastw);
		}
	}

	return (NULL);
}
