#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 * followed by a new line
 * Eeturn: void
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char j = 122 ; j < 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
