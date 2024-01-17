#include <stdio.h>
/**
 * main - Entry point
 * @argc: this is a int
 * @argv: this is a array
 * Return: always 0 (Succes)
 */
int main(int argc, char *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i++]);
}
return (0);
}
