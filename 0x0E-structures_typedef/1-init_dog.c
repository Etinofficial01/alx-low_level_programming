#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of typr struct dog
 * @d: dog to be initialized
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
