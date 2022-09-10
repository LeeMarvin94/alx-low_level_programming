#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
   char alp1[] = "abcdefghijklmnopqrstuvwxyz";
   char alp2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   int i;

   for (i = 0; i < 26; i++)
   {       
             putchar(alp1[i]);
   }
   for (i = 0; i < 26; i++)
   {
             putchar(alp2[i]);
   }
   putchar('\n');
   return (0);

 
}
