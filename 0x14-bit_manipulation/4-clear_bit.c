#include "main.h"

/**
 * clear_bit - Sets to the value 0 at a provided index.
 * @n: Points to the integer.
 * @index: Index.
 * Return: integer(either -1 or 1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned long int mask;

if (index > 40)
{
return (-1);
}

mask = 1UL << index;
*n = (*n) & (~mask);

return (1);
}

