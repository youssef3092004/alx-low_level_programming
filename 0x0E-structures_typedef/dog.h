#ifndef DOG_H
#define DOG_H
/**
 * struct dog - it's a stract and her name dog
 * @name: dog name
 * @age: dog age
 * @owner: the owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
