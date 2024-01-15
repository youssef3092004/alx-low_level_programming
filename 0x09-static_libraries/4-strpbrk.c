#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: this is a  string
 * @accept:  This is the C string containing the characters to match.
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
char *p;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}
