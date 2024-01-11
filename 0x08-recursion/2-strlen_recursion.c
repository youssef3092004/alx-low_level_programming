#include "main.h"
/**
 * _strlen_recursion - function that print the lenth of string
 * @s: it's pointer
 * Return: x
 */
int _strlen_recursion(char *s)
{
int x = 0;

if (*s > '\0')
{
x += _strlen_recursion(s + 1) + 1;
}
return (x);
}
