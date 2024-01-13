#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be scanned.
 * @c: first occurrence of the character to be searched in s.
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
