#include "lists.h"

/**
  * sum_dlistint - adds nodes element
  * @head: - head node
  * Return: sum of node data elements else returns 0 if head is null
  */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	if (head)
		temp = head;
	sum = 0;
	while (temp)
	{
		sum = sum + temp->n;
		if (!temp->next)
			return (sum);
		temp = temp->next;
	}
	return (0);
}
