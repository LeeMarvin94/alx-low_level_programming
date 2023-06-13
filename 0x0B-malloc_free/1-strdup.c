#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory + } =
 *
 * @str: string to copy in the new allocated memory
 *
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
int i;
int len_s = 0;
char *ptr;

if (str == NULL)
return (NULL);
/* Here I get the size of the given string */
while (*(str + i) != '\0')
{
len_s++;
i++;
}
ptr = malloc(sizeof(char) * len_s);
if (ptr == NULL)
return (NULL);
/* Copying of the content of str in the newly allocated memory */
for (i = 0; i < len_s; i++)
{
*(ptr + i) = *(str + i);
}
/* Bellow I add the terminated null caractere */
/*(ptr + i) = '\0';*/
return (ptr);

}
