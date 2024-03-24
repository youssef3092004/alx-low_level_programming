#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the doubly linked list to be freed.
 *
 * Description: This function frees each node in the doubly linked list
 * starting from the head node. It traverses the list and frees the memory
 * allocated for each node using the free function.
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *cur = head;
while (cur)
{
dlistint_t *cur2 = cur->next;
free(cur);
cur = cur2;
}
}
