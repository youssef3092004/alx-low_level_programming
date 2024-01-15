#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: is a string
 * @accept: is a  bytes
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; accept[j] != s[i] ; j++)
{
if (accpet[j] == '\0')
return (i);
}
}
return (i);
}
