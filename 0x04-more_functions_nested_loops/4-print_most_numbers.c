#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 apart
 *			from 2 and 4 and you can
 *			use _putchar twice
 * Return: Always 0 (success)
*/
void print_most_numbers(void)
{
int x = 0;

for (; x <= 9 ; x++)
{
if (x == 2 || x == 4)
{
continue;
}
putchar(x + 48);
}
putchar('\n');
}
