#include "lists.h"

/**
  * get_dnodeint_at_index - get a node data element from node
  * @head: head node
  * @index: index of node data
  *	Return: node data ata index on success else return NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head)
		temp = head;
	else
		return (NULL);

	if (index == 0)
		return (temp);
	for (i = 0; i < index; ++i)
	{
		if (head->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp)
		return (temp);
	return (NULL);
}
