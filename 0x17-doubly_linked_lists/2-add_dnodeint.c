#include "lists.h"

/**
  * add_dnodeint - add node to the beginning of of a dlistint_t list
  * @head: head node
  * @n: int element to add
  * Return: address of new node on success else reutun NULL
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
