#include"lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_list - prints all elements of a list + } =
 *
 * @h: head of the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
unsigned int i;
list_h *new;
list_h *temp;
unsigned long count = 0;

temp = h;
while (temp->next != NULL)
{
if (temp->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s\n", temp->len, temp->str);
}
temp = temp->next;
count++;
}

return (count);
}
