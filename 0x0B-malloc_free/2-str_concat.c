#include "main.h"
/**
 * str_len - calculate the lenth
 * @dest: it's a string
 * Return: lenth
 */
char str_len(char *dest)
{
int lenth;

for (lenth = 0; dest[lenth] != '\0'; lenth++)
{
}
return (lenth);
}
/**
 * *str_concat - concatinate the two string
 * @s1: it's a string 1
 * @s2: it's a string 2
 * Return: NULL if str or ptr == 0 or ptr
 */
char *str_concat(char *s1, char *s2)
{
int i;
char *ptr;
if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';
int lenth_of_s1 = str_len(s1);
int lenth_of_s2 = str_len(s2);
ptr = malloc((lenth_of_s1 + lenth_of_s2) * sizeof(char) + 1);
if (ptr == 0)
return (NULL);
for (i = 0 ; lenth_of_s1 + lenth_of_s2 ; i++)
{
if (i < lenth_of_s1)
{
ptr[i] = s1[i];
}
else
{
ptr[i] = s2[i];
}
}
ptr[i] = '\0';
return (ptr);
}

