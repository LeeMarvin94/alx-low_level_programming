#include"dog.h"
/**
 * main - For learning purposes
 *
 *
 * Return: Always 0
 */
int main(void)
{
	struct dog bob = {"Bob", 2.3, "Lee Marvin"};


	print_dog(&bob);
	return (0);
}


