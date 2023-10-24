#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t no = 0;

while (h)
{
no++;
h = h->next;
}

return (no);
}
