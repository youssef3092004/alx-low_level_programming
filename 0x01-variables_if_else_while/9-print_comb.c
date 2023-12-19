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

	while (x <= 57)
	{
	putchar(x);
	if (x != 57)
{
	putchar(',');
	putchar(" ");
}
		x++;
	}
	putchar('\n');
	return (0);
}
