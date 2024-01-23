#include "main.h"
#include <string.h>

/**
 * *_strdup - copy the deta of str to ptr
 * @str: it's a string
 * Return: NULL if str or ptr == 0 or 0
 */

char *_strdup(char *str)
{
int i = 0, j = 0;
char *ptr;

if (str == 0)
return (NULL);
for (; str[j] != '\0'; j++)
{
}
ptr = malloc(j * sizeof(*str) + 1);
if (ptr == 0)
{
return (NULL);
}
else
{
for (; i < j; i++)
ptr[i] = str[i];
}
return (ptr);
}
