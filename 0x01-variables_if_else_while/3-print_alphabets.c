#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char y = 97;
	char x = 65;

	/*prints a-z*/
	while (y <= 122)
	{
		putchar(y);
		y++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
