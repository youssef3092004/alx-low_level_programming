#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 * i++ increment the variable i by 1.
 */
void print_alphabet_x10(void)
{
int i;

for (i = 1 ; i <= 10; i++)
{
char x = 97;

for (; x < 122 ; x++)
{
putchar(x);
}
putchar('\n');
}
}
