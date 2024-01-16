#include"dog.h"
/**
 * new_dog - Creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner name
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog ->name = name;
	dog ->age = age;
	dog ->owner = owner;

	return (dog);
}


