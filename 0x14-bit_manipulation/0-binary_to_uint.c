#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to the binary string.
 * Return: The converted integer number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int count = 0;
unsigned int value = 0;

if (b == NULL)
{
return (0);
}

while (b[count] != '\0')
{
if (b[count] != '0' && b[count] != '1')
{
return (0);
}

value *= 2;
if (b[count] == '1')
{
value += 1;
}
count++;
}
return (value);
}
