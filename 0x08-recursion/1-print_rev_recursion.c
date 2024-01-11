#include "main.h"
/**
 * _print_rev_recursion - function that print a string reversed
 * @s: it's pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
	_puts_recursion(s + 1);
	_putchar(*s);
}
}
