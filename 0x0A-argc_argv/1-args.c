#include<stdio.h>

/**
 * main - Prints the number of arguments passed to it + } =
 *
 * @argc: Number of arguments passed to
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
