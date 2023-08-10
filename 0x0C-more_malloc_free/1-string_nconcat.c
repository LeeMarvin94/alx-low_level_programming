#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - Concatenates two strings + } =
 * @s1: Thirst string to concatenate
 * @s2: Second string to concatenate
 * @n: number of byte of s2 to be concatenate
 * Return: A pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr_char;
unsigned int i = 0, j = 0, size_s1 = 0, size_s2 = 0;

/* In the case where NULL is passed to one of the strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
{
size_s1++;
i++;
}
while (s2[j] != '\0')
{
size_s2++;
j++;
}
ptr_char = (char *) malloc(sizeof(char) * (size_s1 + size_s2 + 1));
if (ptr_char == NULL)
return (NULL);
for (i = 0; i < size_s1; i++)
ptr_char[i] = s1[i];
j = 0;
for (i = size_s1; j < n; i++)
ptr_char[i] = s2[j++];
ptr_char[i] = '\0';

return (ptr_char);
}
