#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specified index in a doubly
 * linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to delete.
 *
 * Return: If the function succeeds, return 1. Otherwise, return -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *cur = *head;
dlistint_t *prev;
size_t i = 0;
if (!*head)
{
return (-1);
}
for (; i < index; i++)
{
cur = cur->next;
}
prev = cur->next;

if (cur == *head)
{
*head = cur->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
}
else
{
cur->prev->next = cur->next;
if (cur->next != NULL)
{
cur->next->prev = cur->prev;
}
}
free(cur);
return (1);
}
