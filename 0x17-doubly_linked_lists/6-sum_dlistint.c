#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of the linked list
 * @head: the address of the pointer to the head node
 *
 * Return: returns the sum of all the data, if empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
         int sum = 0;

        while (head)
        {
                sum += head->n;
                head = head->next;
        }
         return (sum);
}
