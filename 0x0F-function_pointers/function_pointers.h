#ifndef function_pointers_h
#define function_pointers_h

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, unsigned int size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
