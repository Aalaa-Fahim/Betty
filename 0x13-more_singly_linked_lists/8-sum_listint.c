#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: first node in the linked list
 *
 * Return: the resulting sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tem = head;

while (tem)
{
sum += tem->n;
tem = tem->next;
}

return (sum);
}
