#include "search_algos.h"
#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
    size_t  jumb = 0, ptrone = 0, ptrtwo = 0, i = 0;
    jumb = sqrt(size);
    if (!array || !size)
        return (-1);
    while (ptrone < size && array[ptrone] <= value)
        {
        printf("Value checked array[%lu] = [%d]\n", ptrone, array[ptrone]);
        if (ptrtwo >= size)
            ptrtwo = size - 1;
        else
            ptrtwo = ptrone + jumb;
        if (value >= array[ptrone] && value <= array[ptrtwo])
        {
            printf("Value found between indexes [%lu] and [%lu]\n",ptrone, ptrtwo);
            for (i = ptrone; i <= ptrtwo && i < size; i++)
                {
                    if (array[i] == value)
                    {
                        printf("Found %lu at index: %d\n", i, array[i]);
                        return (i);
                    }
                    else
                    {
                        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
                    }
                }
            }
        ptrone += jumb;
        }
    return (-1);
}

