#include"lists.h"

/**
 * add_node - Add a new node at the beginning of the list + } =
 * @head: points to the head provided
 * @str: string to be assigned to the data field
 * Return:  Adress of the new element (node)
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;

newNode = (list_t *)malloc(sizeof(newNode));
if (newNode == NULL)
{
return (NULL);
}
else
{
newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = *head;
*head = newNode;
}
return (*head);
}
