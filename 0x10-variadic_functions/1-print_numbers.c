#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Diplays numbers followed by a new line + } =
 *
 * @separator: String to print between numbers.
 * @n: number of integers passed to the function.
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int count;
va_list variadic_list;

va_start(variadic_list, n);
for (count = 0; count < n; count++)
{

printf("%d", va_arg(variadic_list, int));

if (separator && count < n - 1)
{
printf("%s", separator);
}

}
printf("\n");

va_end(variadic_list);
}

