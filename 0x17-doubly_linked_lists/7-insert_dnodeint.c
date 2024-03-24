#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Data to be stored in the new node.
 *
 * Return: If the function succeeds, the address of the new node.
 * Otherwise, NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *cur = *h;
dlistint_t *last = *h;
size_t i = 0, j = 0;
newNode->n = n;

while (last->next)
{
last = last->next;
i++;
}
if (idx == 0)
{
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
}
else if (idx == i)
{
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
}
else
{
for (; j < idx; j++)
{
cur = cur->next;
}
newNode->next = cur->next;
newNode->prev = cur;
newNode->next->prev = newNode;
cur->next = newNode;
}
return (newNode);
}
