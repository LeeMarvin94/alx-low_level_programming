#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum its own parameters + } =
 * @n: number of arguments
 * Return: Sum  of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int count;
int somme = 0;
va_list variadic_list;

if (n == 0)
{

return (0);
}


va_start(variadic_list, n);

for (count = 0; count < n; count++)
{
somme += va_arg(variadic_list, int);
}
va_end(variadic_list);

return (somme);
}

