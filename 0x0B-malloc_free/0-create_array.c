#include "main.h"
/**
 * *create_array - creat array
 * @size: size of the array
 * @c: char of array
 * Return: pointer x if size or x != 0 or NULL if x or size == 0
 */
char *create_array(unsigned int size, char c)
{
char *x = malloc(size);

if (size == 0 || x == 0)
return (0);
while (size--)
x[size] = c;
return (x);
}
