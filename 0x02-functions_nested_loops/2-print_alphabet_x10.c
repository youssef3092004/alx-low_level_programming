#include"main.h"

/**
 * print_alphabet - utilizers on the _putchar function to print
 *              the alphabet a - z
*/

void print_alphabet_x10(void);
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
