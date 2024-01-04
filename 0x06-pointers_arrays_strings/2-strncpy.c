#include "main.h"

/**
 * _strncpy -  function that copies a string.
 *
 * @src: pointer to source input
 * @dest: pointer to destination input
 * @n: contains more bytes
 * Return: return @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
