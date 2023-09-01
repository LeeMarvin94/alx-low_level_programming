#include"main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @num1: first integer
 * @num2: second integer
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int bit_n;
unsigned int i = 0;



bit_n = (n ^ m);
while (bit_n > 0)
{
i++;
bit_n &= (bit_n - 1);
}
return (i);
}

