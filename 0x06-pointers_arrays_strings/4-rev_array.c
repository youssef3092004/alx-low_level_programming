#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: as array of integers
 * @n: the number of elements to swap
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
int i, j, temp;

for (i = 0, j = (n - 1); i < j ; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
