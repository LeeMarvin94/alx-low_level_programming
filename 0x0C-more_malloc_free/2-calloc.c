#include"main.h"
#include<stdlib.h>
/**
 * _calloc - Allocate memory for an array + } =
 * @nmemb: Number  of  elements
 * @size: size of each elements
 * Return: A pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr_void;
if (nmemb == 0 || size == 0)
return (NULL);

ptr_void = malloc(nmemb * size);
if (ptr_void == NULL)
return (NULL);

copy(ptr_void, 0, size * nmemb);

return (ptr_void);

}

/**
 * copy - copy char to the array pointer
 * @str: string
 *
 * @c: caractere to be filled
 * @nb: limit
 * Return: A filled string
 */
char *copy(char *str, char c, unsigned int nb)
{
unsigned int j;
for (j = 0; j < nb; j++)
{
*(str + j) = c;
}
return (str);
}

