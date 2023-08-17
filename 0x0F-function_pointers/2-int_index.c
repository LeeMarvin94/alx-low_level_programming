#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer + } =
 *
 * @array: the array to search through
 * @size: Array' size
 * @cmp: Pointer to the function to compare
 *
 * Return: An index
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int j;
if (cmp && array)
{

for (j = 0; j < size; j++)
{
if (cmp(array[j]) != 0)
{
return (j);
}
}

}

return (-1);

}

