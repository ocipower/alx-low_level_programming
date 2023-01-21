#include "lists.h"

/**
  * dlistint_len - prints  number oflist.
  * @h: pointer to head node.
  * Return: number of nodes printed
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int no_of_nodes;

	no_of_nodes = 0;

	if (h != NULL)
	{
		ptr = h;

		while (ptr != NULL)
		{
			ptr = ptr->next;
			no_of_nodes++;
		}
	}
	return (no_of_nodes);
}
