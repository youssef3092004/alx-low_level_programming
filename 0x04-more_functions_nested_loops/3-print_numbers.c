#include "main.h"
/**
 * print_numbers - prints 0 - 9
 *		only using _putchar twice
 *
 * Return: always 0 (success)
*/
void print_numbers(void)
{
char x = 48;

for (; x <= 57 ; x++)
{
_putchar(x);
}
_putchar('\n');
}
