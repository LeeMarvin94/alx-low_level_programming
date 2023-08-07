#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated memory space + } =
 *
 * @str: content of the pointer to be copied
 * Return: A pointer or null
 */

char *_strdup(char *str)
{
int i = 0;
int count = 0;
char *ptr_c;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
{
count++;
i++;
}

ptr_c = malloc(sizeof(char) * count);
if (ptr_c == NULL)
return (NULL);

for (i = 0; i < count; i++)
{
ptr_c[i] = str[i];
}
return (ptr_c);
}
