#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
int prod, mul, num;
if (n <= 15 && n >= 0)
{
for (num = 0; num <= n; ++num)
{
putchar(48);
for (mul = 1; mul <= n; ++mul)
{
putchar(',');
putchar(' ');
prod = num * mul;
if (prod <= 9)
putchar(' ');
if (prod <= 99)
putchar(' ');
if (prod >= 100)
{
putchar((prod / 100) + 48);
putchar((prod / 10) % 10  + 48);
}
else if (prod <= 99 && prod >= 10)
putchar((prod / 10) + 48);
putchar((prod % 10) + 48);
}
putchar('\n');
}
}
}
