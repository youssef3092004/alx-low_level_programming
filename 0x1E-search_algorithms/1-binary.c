#include "search_algos.h"
#include <stdio.h>

/**
* print_array - Prints the current part of the array being searched.
* @array: The array to be printed.
* @first: The starting index of the current subarray.
* @last: The ending index of the current subarray.
*/
void print_array(int *array, size_t first, size_t last)
{
size_t i;

printf("Searching in array: ");
for (i = first; i <= last; i++)
{
printf("%d", array[i]);
if (i < last)
printf(", ");
}
printf("\n");
}

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
print_array(array, first, last);
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
