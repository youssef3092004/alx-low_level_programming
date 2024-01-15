#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: this is a string
 * @needle: this is a string
 * Return: a pointer
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int a, j;

if (needle[0] == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}
}
return ('\0');
}
