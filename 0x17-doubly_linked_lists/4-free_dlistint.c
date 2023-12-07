#include "lists.h"

/**
 * free_dlistint - free the linked list
 * @head: pointer to the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head= head->next;
		free(node);
	}
}
