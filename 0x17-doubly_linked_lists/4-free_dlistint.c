#include "lists.h"

/**
  * free_dlistint - head node to be freed
  * @head: head pointer
  * Return: void
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *to_free;

	if (head)
	{
		temp = head;
		while (temp->next)
		{
			to_free = temp;
			temp = temp->next;
			free(to_free);
			to_free = NULL;
		}

			free(temp);
	}
	head = NULL;
}
