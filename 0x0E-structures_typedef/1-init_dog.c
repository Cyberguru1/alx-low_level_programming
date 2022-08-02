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
        d -> name = name;
        d -> age = age;
        (*d).owner = owner;
    }
}

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}