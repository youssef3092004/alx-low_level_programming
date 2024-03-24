#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at a specific,
 * index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: If the node at the specified index exists, return
 * a pointer to that node.
 *         Otherwise, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *cur = head;
    size_t i = 0;
    while (cur->next)
    {
        if (i == index)
        {
            return cur;
        }
        else
        {
            cur = cur->next;
            i++;
        }
    }
    return NULL;
}
