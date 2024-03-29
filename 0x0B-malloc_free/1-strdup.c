#include"main.h"
#include<stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated memory space + } =
 *
 * @str: content of the pointer to be copied
 * Return: A pointer or NULL
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

ptr_c = malloc(sizeof(char) * count + 1);
if (ptr_c == NULL)
return (NULL);

for (i = 0; i < count; i++)
{
ptr_c[i] = str[i];
}
ptr_c[i] = '\0';
return (ptr_c);
}
