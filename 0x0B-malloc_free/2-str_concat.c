#include"main.h"
#include<stdlib.h>

/**
 * str_concat - Concatenates two strings + } =
 *
 * @s1: First string to be concatenate
 * @s2: Second string to be concatenate
 * Return: A pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int counts1 = 0;
int counts2 = 0;
char *ptr_s;

if (s1 == NULL || s2 == NULL)
{
if (s1 == NULL)
*s1 = '\0';
else
*s2 = '\0';
}
while (s1[i] != '\0')
{
counts1++;
i++;
}
while (s2[j] != '\0')
{
counts2++;
j++;
}
ptr_s = malloc(sizeof(char) * (counts1 + counts2 + 1));
if (ptr_s == NULL)
return (NULL);
for (i = 0; i < counts1; i++)
ptr_s[i] = s1[i];
j = 0;
for (i = counts1; i < (counts2 + counts1); i++)
{
ptr_s[i] = s2[j];
j++;
}
ptr_s[i] = '\0';
return (ptr_s);
}
