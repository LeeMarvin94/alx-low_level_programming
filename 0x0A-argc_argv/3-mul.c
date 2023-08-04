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
int sum;

if (argc != 3)
{
printf("Error\n");
return (1);
}

sum = atoi(argv[1]) + atoi(argv[2])
printf("%d\n", sum);

return (0);
}
