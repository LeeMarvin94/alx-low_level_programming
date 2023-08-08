#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid - Create a 2D  grid + } =
 * @width: Columns
 * @height: Rows
 * Return: A pointer or Null
 **/
int **alloc_grid(int width, int height)
{

int a;
int b;
int **res;

if (width < 1 || height < 1)
return (NULL);

res = malloc(sizeof(int *) * height);
if (res == NULL)
{
free(res);

return (NULL);
}

for (a = 0; a < height; a++)
{
res[a] = malloc(sizeof(int) * width);
if (res[a] == NULL)
{
while (a-- >= 0)
free(res[a]);
free(res);
return (NULL);
}
}

for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)

res[a][b] = 0;

}

return (res);

}
