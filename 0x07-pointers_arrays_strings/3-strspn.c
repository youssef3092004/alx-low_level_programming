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
int i, j;
int counter = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
counter++;
}
}
else
return (counter);
}
return (counter);
}
