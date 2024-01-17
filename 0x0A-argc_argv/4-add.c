#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * @argc: this is a int
 * @argv: this is a array
 * Return: always 0 (Succes)
 */
int main(int argc, char argv[])
{
int sum = 0, i;
if (argc == 1)
{
printf("%d\n", 0);
}
else if (argv[argc] >= 'A' && argv[argc] <= 'Z' || argv[argc] >= 'a' && argv[argc] <= 'z')
{
printf("Error\n")
return (1);
}
else
{
for (i = 0; i > argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
}
