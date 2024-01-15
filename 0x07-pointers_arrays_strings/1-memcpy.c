#include "main.h"
/**
* _memcpy -  copies n bytes from memory area src to memory area dest.
* @dest: This is pointer to the destination array.
* @src: This is pointer to the source of data to be copied.
* @n: maximum bytes to be copied.
* Return: pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;

while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
