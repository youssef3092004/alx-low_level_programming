#include "main.h"
#include <string.h>

/**
 * *_strdup - copy the deta of str to arr
 * @str: it's a string
 * Return: NULL if str or arr == 0 or 0
 */

char *_strdup(char *str)
{
int lenth, i, j;
char *arr;

if (str == 0)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
{

}
arr = malloc(j * sizeof(*str) + 1);
if (arr == 0)
{
return (NULL);
}
else
{
for (i = 0; i < lenth; i++)
{
m[i] = str[i];
}
}
return(arr)
}
