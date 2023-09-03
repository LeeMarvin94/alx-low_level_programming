#include"lists.h"

/**
 * list_len - Returns the linked list's element number + } =
 * @h: head of the linked list
 * Return: number of nodes of the linked list
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
