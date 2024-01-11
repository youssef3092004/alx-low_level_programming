#include "main.h"
/**
 * factorial - function that print the factorial of number n
 * @n: input number
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1))
}
