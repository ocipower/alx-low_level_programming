
#include "lists.h"
/**
  * listint_len - prints number of nodes
  * @h: head pointer
  * Return: returns number of nodes printed
  */
size_t listint_len(const listint_t *h)
{
	unsigned int num_of_nodes = 0;

	if (h != NULL)
	{
		while (h !=  NULL)
		{
			num_of_nodes++;
			h = h->next;
		}
	}
	return (num_of_nodes);
}
