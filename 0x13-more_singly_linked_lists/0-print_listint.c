#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t no = 0;

 while (h)
 {
 printf("%d\n", h->n);
 no++;
 h = h->next;
 }

 return (no);
}
