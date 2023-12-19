#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 48;

	while (x <= 102)
	{
	if (x == 58)
	x += 39;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
