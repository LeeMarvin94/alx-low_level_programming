#include<stdio.h>

/**
 * main - Prints all arguments it receives + } =
 *
 * @argc: count of the arguments received
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
