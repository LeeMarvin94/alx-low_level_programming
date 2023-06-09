#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two integers + } =
 *
 * @argc: count the number of the arguments given to the program
 * @argv: pointers to the string of the given arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);

}
