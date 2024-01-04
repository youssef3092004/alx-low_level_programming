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
int i, j = 0;

while ( dest[i] != '\0' ) ++i;

for ( j = 0; src[j] != '\0'; j++ )
{
dest[i++] = src[j];
}
return (dest);
}
