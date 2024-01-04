#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @src: pointer to source input
 * @dest: pointer to destination input
 * @n: contains more bytes
 * Return: pointer to the resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while(dest[i])
i++;
for (j = 0 ; j < n && src[j] != '\0' ; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}
