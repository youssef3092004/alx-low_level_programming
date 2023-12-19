#include<stdio.h>

/**
 * main -Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
