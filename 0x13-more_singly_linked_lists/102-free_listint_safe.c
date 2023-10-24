#include "lists.h"

/**
 * free_listint_safe - frees the linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t l = 0;
int dif;
listint_t *tem;

if (!h || !*h)
return (0);

while (*h)
{
dif = *h - (*h)->next;
if (dif > 0)
{
tem = (*h)->next;
free(*h);
*h = tem;
l++;
}
else
{
free(*h);
*h = NULL;
l++;
break;
}
}

*h = NULL;

return (l);
}
