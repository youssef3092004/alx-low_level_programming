#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 *
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *curr = (dlistint_t *)h;
size_t count = 0;
while (curr)
{
printf("%i\n", curr->n);
curr = curr->next;
count++;
}
return (count);
}
