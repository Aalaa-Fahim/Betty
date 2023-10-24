#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node’s data (n) which deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tem;
int i;

if (!head || !*head)
return (0);

i = (*head)->n;
tem = (*head)->next;
free(*head);
*head = tem;

return (i);
}
