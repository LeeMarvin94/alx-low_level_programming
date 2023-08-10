#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - Allocate  memory  + } =
 *
 * @b: amount of memory to allocate
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
void *ptr_void;

ptr_void = malloc(b);

if (ptr_void == NULL)
{
exit(98);
}

return (ptr_void);
}
