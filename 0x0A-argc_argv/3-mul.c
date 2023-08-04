#include<stdio.h>
#include<stdlib.h>
/**
 * main - Multiplies two numbers followed by a new line + } =
 *
 * @argc: count of the arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int a, b, sum;

if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
sum = a + b;

printf("%d\n", sum);

return (0);
}
