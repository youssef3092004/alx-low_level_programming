#include "main.h"
/**
 * _pow_recursion - function that print the x powered y
 * @x: input number
 * @y: input number
 * Return: the result of x powered by x
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
