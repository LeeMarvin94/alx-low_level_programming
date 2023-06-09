#include<stdio.h>

/**
 * main - displays its name followed by a new line + } =
 *
 * @argc: count the number of given arguments
 * @argv: vector representing a argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
argc = 1;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}

return (0);
}
