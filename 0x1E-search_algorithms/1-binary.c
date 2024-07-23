#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_search - Performs a binary search on a sorted integer array.
* @array: The sorted integer array to be searched.
* @size: The number of elements in the array.
* @value: The value to search for in the array.
*
* Return: The index of the first occurrence of the value in the array,
* or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
size_t first, last, middle;

if (array == NULL)
return (-1);

first = 0;
last = size - 1;

while (first <= last)
{        
middle = (first + last) / 2;
if (array[middle] == value)
return (middle);
else if (array[middle] > value)
last = middle - 1;
else
first = middle + 1;
}

return (-1);
}
