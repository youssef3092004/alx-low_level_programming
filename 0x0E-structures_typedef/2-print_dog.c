#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog
 * @*d: pointer of dog
 * @d: addres of dog
 * return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
printf("Name: %s\n", "(nil)");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: %s\n", "(nil)");
else
printf("Owner: %s\n", d->owner);
}
}
