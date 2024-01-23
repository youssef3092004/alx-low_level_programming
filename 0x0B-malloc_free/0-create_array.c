#include "main.h"
/**
 * *create_array - creat array
 * @size: size of the array
 * @c: char of array
 * Return: pointer n if size or n != 0 or NULL if n or size == 0
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);

if (size == 0)
return (0);
while (size--)
{
n[size] = c;
}
return (n);
}
