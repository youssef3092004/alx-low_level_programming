#include "main.h"
/**
* puts2 - PUTS EVEN INNDECIES ONLY
* @str: string to be printed
* Return: void
*/

void puts2(char *str)
{
for (i = 0 ; str[i] != '\0' ; i++)
{
if (i % 2 == 0)
_putchar(str[i])
}
_putchar('\n')i
}