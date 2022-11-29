#include "lists.h"
/**
  * print_listint - prints number of nodes
  * @h: head pointer
  * Return: returns number of nodes printed
  */

size_t print_listint(const listint_t *h)
{
	unsigned int num_of_nodes = 0;

	if (h != NULL)
	{
		while (h !=  NULL)
		{
			printf("%i\n", h->n);
			num_of_nodes++;
			h = h->next;
		}
	}
	return (num_of_nodes);
}
