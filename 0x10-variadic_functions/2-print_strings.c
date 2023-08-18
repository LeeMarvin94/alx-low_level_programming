#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Displays strings followed by a new line + } =
 *
 * @separator: string to print between strings.
 * @n: number of strings passed to the function.
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list variadic_list;
char *s;

unsigned int count;

va_start(variadic_list, n);

for (count = 0; count < n; count++)
{
s = va_arg(variadic_list, char *);

if (s)
{
printf("%s", s);
}
else
{
printf("(nil)");
}

if (count < n - 1)
{
if (separator)
{
printf("%s", separator);
}
}
}

printf("\n");

va_end(variadic_list);
}

