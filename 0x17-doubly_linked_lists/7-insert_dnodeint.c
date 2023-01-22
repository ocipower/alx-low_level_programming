#include "lists.h"
/**
  * insert_dnodeint_at_index - get a node data element from node
  * @h: head node
  * @idx: index to add node
  * @n: data element to be added
  * Return: The address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node)
		new_node->n = n;
	temp = *h;
	if (!*h)
		return (add_dnodeint(h, n));
	if (idx == 0)
	{
		new_node->next = temp;
		if (temp->prev)
			temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx > 1 && temp->next)
	{
		temp = temp->next;
		idx--;
	}
	if (idx > 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
