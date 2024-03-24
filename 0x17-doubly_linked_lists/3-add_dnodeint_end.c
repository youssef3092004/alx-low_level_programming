#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node containing a,
 * given integer to the end of a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The integer value to be added as data in the new node.
 *
 * Return: A pointer to the newly added node,
 * or NULL if memory allocation fails or head is NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *cur = (dlistint_t *)(*head);
if (!newNode)
{
return (NULL);
}
newNode->n = n;
if (!(*head))
{
*head = newNode;
return (*head);
}
while (cur->next)
{
cur = cur->next;
}
cur->next = newNode;
newNode->next = NULL;
newNode->prev = cur;
return (newNode);
}
