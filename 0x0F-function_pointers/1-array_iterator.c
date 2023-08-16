#include "function_pointers.h"
#include<stdlib.h>

/**
 * array_iterator - Execute one function like a parameter
 *
 * @array: Array to use for iterate
 * @size: Size of the  given array
 * @action: A pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int i;

if (!(array) || !(action))
return;

for (i = 0; i < size; i++)
action(array[i]);
}

