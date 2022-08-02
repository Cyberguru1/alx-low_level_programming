#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that returns a struct parameter.
 * @d: dog name.
 * @name: dog name.
 * @age: dog age.
 * @owner: owner name.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != Null)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
