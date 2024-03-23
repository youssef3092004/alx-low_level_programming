#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
dlistint_t *curr = (dlistint_t *)h;
size_t count = 0;
while (curr)
{
count++;
curr = curr->next;
}
return (count);
}
