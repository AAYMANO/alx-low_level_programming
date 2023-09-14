#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at given index
 * @head: pointer to current head node
 * @index: index of node to return
 *
 * Return: address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);
}
