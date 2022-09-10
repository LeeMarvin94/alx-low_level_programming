#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if (n > 5)
        {
            printf("The last digit of %n is and is greater than 5 \n");
        }
        if (n == 5)
        {
            printf("The last digit of %n is and is 0 \n");
        }
	if (n < 6 && !0)
        {
            printf("The last digit of %n is less than 6 and not 0 \n");
        }

	return (0);
}
