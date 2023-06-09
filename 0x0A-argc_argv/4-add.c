#include<stdio.h>
#include<stdlib.h>
/**
 * main - Add positive numbers + } =
 *
 * @argc: number of parameters given to the program
 * @argv: array of pointers to the string of the given parameters
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

/* If no number is passed as argument */
if (argc == 1)
{
printf("%d\n", 0);
return (1);
}

/* Verifies all the given parameters are digits if throw an error */
for (i = 1; i < argc; i++)
{
if (**(argv + i) < 48 || **(argv + i) > 57)
{
printf("Error\n");
return (1);
}

if (atoi(argv[i]) > 0)
{
sum += atoi(argv[i]);
}

}
/* Displaying of the result */
printf("%d\n", sum);

return (0);
}
