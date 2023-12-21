#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 apart
 *			from 2 and 4 and you can
 *			use _putchar twice
 * Return: Always 0 (success)
*/
void print_most_numbers(void)
{
char x = 48;

for (; x <= 57 ; x++)
{
if (x == 2 || x == 4)
{
i++;
}
_putchar(x);
}
_putchar('\n');
}
