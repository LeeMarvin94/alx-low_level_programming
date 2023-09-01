#include "main.h"

/**
 * print_binary_recursive - prints the binary using recursion.
 * @num: number to be converted.
 * Return: Nothing.
 */
void print_binary_recursive(unsigned long int num)
{
if (num > 1)
print_binary_recursive(num >> 1);
_putchar((num & 1) + '0');
}
/**
 * print_binary - Displays binary representation of a number.
 * @n: Number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
print_binary_recursive(n);
}

