#include"main.h"

/**
 * print_alphabet - utilizers on the _putchar function to print
 *		the alphabet a - z
*/

void print_alphabet(void)
{
	char x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
