#include<stdio.h>
#include<stdlib.h>
/**
 * str_concat - Concatenates two strings + } =
 *
 * @s1: First string to be concatenate
 * @s2: Second string to be concatenates
 *
 * Return: NULL or a char pointer
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, len_s1 = 0, len_s2 = 0;
char *ptr;
if (s1 == NULL)
s1 = "";
if (s1 == NULL)
s2 = "";
while (*(s1 + i) != '\0')
{
len_s1++;
i++;
}
while (*(s2 + j) != '\0')
{
len_s2++;
j++;
}
ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
{
*(ptr + i) = *(s1 + i);
}
j = 0;
while (*(s2 + j) != '\0')
{
*(ptr + i) = *(s2 + j);
j++;
i++;
}
*(ptr + i) = '\0';
return (ptr);
}
