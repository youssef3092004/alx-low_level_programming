#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value)
    {
    if (array == NULL)
        return (-1);
    int first = 0, last = 0, middle = 0;
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

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
