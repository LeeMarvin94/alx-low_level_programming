#include<stdlib.h>
#include"function_pointers.h"

/**
 * print_name - Function that prints a name + } =
 * @name: name to be printed
 *
 * @f: pointer that points to the function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (!(f) || !(name))
{
return;
}

f(name);
return;

}

