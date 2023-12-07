#include "lists.h"

/**
 * print_dlistint - print doubly-linked list
 * @h: the address of the head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t e = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		e++;
	}
	return (e);
}
