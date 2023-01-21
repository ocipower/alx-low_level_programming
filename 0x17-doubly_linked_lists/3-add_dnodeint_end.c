#include "lists.h"

/**
  * add_dnodeint_end - add node to the end of a dlistint_t list
  * @head: head node
  * @n: int element to add
  * Return: address of new node on success else reutun NULL
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	new_node->prev = temp;
	(temp)->next = new_node;
	return ((dlistint_t *)temp->next);
}
