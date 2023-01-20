#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int no_of_nodes;

	no_of_nodes = 0;
	const dlistint_t *ptr = NULL;

	if (h != NULL)
	{
		ptr = h;

		while (ptr != NULL)
		{
			printf("%d", ptr->n);
			ptr = ptr->next;
			no_of_nodes++;
		}
	}
}
