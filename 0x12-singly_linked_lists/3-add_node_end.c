#include"lists.h"

/**
 * add_node_end - Add a node at  the end of the linked list + } =
 * @head: points tp the head of the linked  list
 * @str: string to be duplicated
 * Return: adress of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
/* The new node created */
list_t *newNode;
list_t *temporary;

newNode = (list_t *)malloc(sizeof(list_t));
/* In  the case where the memory allocation failed */
if (newNode == NULL)
{
return (NULL);
}
/* new node  assignment */
newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
}
else
{
temporary = *head;
while (temporary->next != NULL)
{
temporary = temporary->next;
}
temporary->next = newNode;
}
return (temporary);
}
