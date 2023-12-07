#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the linked list
 * @head: the address of the pointer to the head node
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of dlistint_t, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
