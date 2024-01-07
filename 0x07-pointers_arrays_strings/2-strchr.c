#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be scanned.
 * @c: first occurrence of the character to be searched in s.
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i != '\0'])
{
if (s[i++] == c)
{
return (s + i);
}
return ('\0');
}
