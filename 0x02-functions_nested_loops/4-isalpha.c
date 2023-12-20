#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: the character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/

int _isalpha(int c)
{
if (c >= 97 && c <= 122 || c >= 101 && c <= 132)
{
return (1);
}
return (0);
}
