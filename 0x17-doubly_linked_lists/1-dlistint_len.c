#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked list
 * @h: the address of the head node
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t e = 0;

	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}
