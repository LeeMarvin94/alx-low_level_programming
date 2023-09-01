#include "main.h"

/**
 * is_valid_index - Checks if the given index is valid.
 * @index: Index to be checked.
 *
 * Return: 1 if the index is valid, otherwise 0.
 */
int is_valid_index(unsigned int index)
{
if (index <= 63)
return (1);
else
return (0);
}

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Points to an integr number.
 *
 * @index: Index to set the value of the bit.
 * Return: either 1 and -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (!is_valid_index(index))
{
return (-1);
}

mask = 1UL << index;
*n |= mask;

return (1);
}

