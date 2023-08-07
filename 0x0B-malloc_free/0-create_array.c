#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - Creates an array of char  + } =
 *
 * @size: size of the array to be created
 * @c: caractere to be filled with
 * Return: A pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr_c;

if (size == 0)
return (NULL);

ptr_c = malloc(sizeof(char) * size);
if (ptr_c == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
*(ptr_c + i) = c;
}
return (ptr_c);
}
