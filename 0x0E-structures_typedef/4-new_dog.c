#include"dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * new_dog - Creates a new dog + } =
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: A pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
/* Here just bellow I create a pointer of type dog_t */
dog_t *my_dog;

my_dog = malloc(sizeof(dog_t));
if (my_dog  == NULL)
return  (NULL);

my_dog->name = name;
my_dog->age  = age;
my_dog->owner = owner;

return (my_dog);
}



