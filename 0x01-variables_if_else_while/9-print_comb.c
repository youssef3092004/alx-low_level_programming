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
	int x = 0;

	while (x <= 9)
	{
	putchar(x + 48);
	if (x != 9)
{
	putchar(',');
}
		x++;
	}
	putchar('\n');
	return (0);
}
