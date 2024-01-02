#include "main.h"

/**
 * swap_int - write a function that swap the value of two integers
 *
 * @a: input 1
 * @b : input 2
 *
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
