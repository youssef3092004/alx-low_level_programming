#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
* jump_search - Searches for a value in a sorted array of integers using the
*                Jump Search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: The first index where the value is located, or -1 if the value is not
*         present or if the array is NULL.
*
* Description: This function performs the Jump Search algorithm to find the
*              given value in a sorted array of integers. It prints the value
*              checked at each step and the range where the value is found or
*              not found.
*/
int jump_search(int *array, size_t size, int value)
{
size_t jump, left, right, i;

if (!array || size == 0)
return (-1);

jump = (size_t) sqrt(size);
left = 0;
right = 0;

while (left < size && array[left] < value)
{
printf("Value checked array[%lu] = [%d]\n", left, array[left]);
right = left + jump;
if (right >= size)
right = size - 1;
if (array[left] <= value && array[right] >= value)
{
printf("Value found between indexes [%lu] and [%lu]\n",
left, right);
for (i = left; i <= right; i++)
{printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{return (i);
}}
return (-1);
}
left += jump;
}
if (left < size)
{printf("Value found between indexes [%lu] and [%lu]\n",
left, (left + jump > size - 1) ? (size - 1) : (left + jump));
for (i = left; i < size; i++)
{printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{return (i);
}}}
return (-1);
}
