#include"lists.h"
/**
 * print_list - prints all elements of a list + } =
 *
 * @h: head of the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

/* temp = h; */

while (h != NULL)
{

if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}

h = h->next;
count++;
}

return (count);
}
