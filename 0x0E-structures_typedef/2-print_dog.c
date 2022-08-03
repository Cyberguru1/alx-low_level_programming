#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints the sturct dog
 * @d: pointer to struckt d
 * Returns: Null or nill on error
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age != NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %s\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
