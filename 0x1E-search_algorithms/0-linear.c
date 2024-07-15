#include "main.h"
/**
 * linear_search - Performs a linear search on an integer array.
 * @array: The integer array to be searched.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the first occurrence of the value in the array,
 * or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
int i;
for (i = 0; i < size; i++)
{
if (array[i] == value) {
printf("Value checked array[%d] = %d\n", i, array[i]);
return (i);
}
else
{
printf("Value checked array[%d] = %d\n", i, array[i]);
}
}
return (-1);
}
