#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
<<<<<<< HEAD
    if (d != '\0')
    {
        d -> name = name;
        d -> age = age;
        (*d).owner = owner;
    }
}
=======
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
>>>>>>> 5e8b9d7bf515b8b9bdd5f95528060bd1bc8edcff
