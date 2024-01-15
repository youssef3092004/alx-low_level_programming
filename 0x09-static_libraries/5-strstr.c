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
int a;
int b;

if (needle[0] == '\0')
return (haystack);
for (a = 0; haystack[a] != '\0'; a++)
{
if (haystack[a] == needle[0])
{
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[a + b] != needle[b])
break;
}
if (needle[b] == '\0')
return (haystack + a);
}
}
return ('\0');
}
