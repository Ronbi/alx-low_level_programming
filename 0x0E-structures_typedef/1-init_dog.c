#include "dog.h"
#define NULL (void *)0
/**
 * init_dog - Initializes a variable of type struct dog.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
