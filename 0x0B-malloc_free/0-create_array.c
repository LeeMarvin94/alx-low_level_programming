#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - Creates and initializes it with a specific char + } =
 *
 * @size: number of char to allocate
 * @c: to initializes the allocate memory with
 *
 * Return: NULL or a random char pointer
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
int i;

if (size == 0)
return (NULL);

else
{
ptr = malloc(sizeof(char) * size);

if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < (int)size; i++)
{
*(ptr + i) = c;
}
return (ptr);
}
}

}
