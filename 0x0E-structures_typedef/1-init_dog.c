#include <sdlib.h>
#include "dog.h"

/**
 * init_dog - initilize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->namme = name;
	d->age = age;
	d->owner = owner;
}
