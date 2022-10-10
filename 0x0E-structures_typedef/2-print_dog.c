#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initialises a struct dog
 * @d: data of type struct dog
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
