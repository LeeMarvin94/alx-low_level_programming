#include"dog.h"
/**
 * free_dog - Frees the memory allocated for dog
 *
 * @d: points to the dog
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	free(d);

	return ;
}
