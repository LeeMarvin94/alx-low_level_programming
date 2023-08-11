#include"main.h"
#include<stdlib.h>
/**
 * array_range - Creates an array of integers + } =
 * @min:  Minimal value into the array
 * @max: Maximal value into the array
 * Return: A pointer or NULL
 */

int *array_range(int min, int max)
{
int *ptr_int;
int i;
int min_bis = min;

if (min > max)
return (NULL);

ptr_int = malloc(sizeof(int) * ((max - min) + 1));
if (ptr_int == NULL)
return (NULL);

while (i <= (max - min))
{
ptr_int[i++] = min_bis++;
}
return (ptr_int);
}
