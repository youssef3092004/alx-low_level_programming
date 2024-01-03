#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @src: pointer to source input
 * @dest: pointer to destnation input
 *
 * Return: pointer to the resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
int x = 0, y;

while (dest[x])
{
x++;
}
for (y = 0 ; src[y] ; y++)
{
dest[x++] = src[y];
}
return (dest);
}
