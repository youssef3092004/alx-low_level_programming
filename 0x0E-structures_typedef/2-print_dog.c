#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog
 * @*d: is a pointer
 * @d: addres of dog
 * return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s", (*d).name ? (*d).name : "(nil)");
printf("Age: %f", (*d).age);
printf("Name: %s", (*d).owner ? (*d).owner : "(nil)");
}
}
