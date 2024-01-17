#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * @argc: this is a int
 * @argv: this is a array
 * Return: always 0 (Succes)
 */
int main(int argc, char *argv[])
{
int sum;
if (sum == 3)
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

