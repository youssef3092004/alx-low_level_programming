#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: a pointer
 * @b: constant byte
 * @n: maximum byte to use it
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (n > 0)
{
s[i++] = b;
n--;
}
return (s);
}
