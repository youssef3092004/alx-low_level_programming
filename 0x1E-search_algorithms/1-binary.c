#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value)
    {
    if (array == NULL)
        return (-1);
    size_t  first = 0, last = 0, middle = 0;
    while (last <= middle) {
        first = 0, last = size - 1,
        middle = (first + last) / 2;
        if (array[middle] == value)
            return (middle);
        if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return (-1);
}
