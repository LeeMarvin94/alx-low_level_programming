#ifndef dog_h
#define dog_h

#include<stdio.h>
#include<stdlib.h>

/**
 * struct dog - Dog structure data type
 * @name: represents the name of the Dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;

};

/**
 * dog_t - Typedef for struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
