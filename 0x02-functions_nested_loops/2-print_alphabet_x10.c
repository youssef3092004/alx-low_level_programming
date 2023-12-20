#include"main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 * followed by a new line
 * Eeturn: void
 */

void print_alphabet_x10(void)
{
for (int i = 0 ; i < 10 ; i++)
{
	char x = 97;

for (; x < 122 ; x++)
	{
putchar(x);
}
putchar('\n');
}
}
