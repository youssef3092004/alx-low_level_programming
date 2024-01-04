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
int i;
for (i = n - 1 ; i <= 0 ; i--)
{
putchar(a[i]);  
}
}
