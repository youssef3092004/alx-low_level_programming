#include "main.h"
/**
 * _puts_recursion - function that print a string
 * @s: it's pointer
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
