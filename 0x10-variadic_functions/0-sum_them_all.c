#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - main
 * @n: arg count
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned i; 
int sum;

va_start(arg, n);

sum = 0;
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (arg);
}
