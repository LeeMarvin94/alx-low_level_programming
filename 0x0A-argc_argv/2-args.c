#include<stdio.h>

/**
 * main - prints all arguments it receives + } =
 *
 * @argc: count the number of parameters givento the program
 * @argv: contains pointers of the parameters
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", *(argv + i));
}
return (0);
}
