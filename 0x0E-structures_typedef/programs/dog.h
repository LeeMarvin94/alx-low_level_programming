#ifndef main_h
#define main_h

#include<stdio.h>
#include<stdlib.h>
/**
 * struct dog - represents a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
