#include "dog.h"
/**
 * init_dog -  initialize a variable of dog
 *@d: init of dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
