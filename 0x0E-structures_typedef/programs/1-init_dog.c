#include"dog.h"
/**
 * init_dog - Initializes a variable of struct dog
 *
 * @d: points to the dog block
 * @name: points to the dog name
 * @age: dog's age
 * @owner: points to the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d ->name = name;
	d ->age = age;
	d ->owner = owner;

        return ;
}
