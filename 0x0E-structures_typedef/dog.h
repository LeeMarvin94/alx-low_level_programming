#ifndef dog_h
#define dog_h

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
