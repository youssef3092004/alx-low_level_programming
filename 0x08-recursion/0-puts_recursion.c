#include "main.h"
/**
 * _puts_recursion - function that print a string
 * @s: it's pointer
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_putchar(s + 1);
}
}
