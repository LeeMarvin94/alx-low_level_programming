#include"dog.h"
/**
 * print_dog - Prints a struct dog
 *
 *
 * @d: Points to the dog block
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d ->name);
	printf("Age: %f\n", d ->age);
	printf("Owner: %s\n", d->owner);

	return ;
}

