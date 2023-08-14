#include"dog.h"
#include<stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog + } =
 *
 * @d: point to the struct dog data type
 * @name: points to the name of the dog
 * @age: Age of the dog
 * @owner: points to the name of the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

(*d).name = name;
(*d).age = age;
(*d).owner = owner;

}
