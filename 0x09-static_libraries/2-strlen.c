#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 *
 * @s: string prameter
 *
 * Return: length of sring
*/

int _strlen(char *s)
{
int x;

for (x = 0; *s != '\0' ;  s++)
x++;
return (x);
}
