#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initialize a variable of type struct dog
 *@d: a pointer to the structure
 *@name: the 1st member
 *@age: the 2nd member
 *@owner: the 3rd member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
